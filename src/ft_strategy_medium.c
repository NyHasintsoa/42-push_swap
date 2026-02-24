/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy_medium.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 20:30:00 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/24 19:58:32 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_utils.h"

static int	ft_get_chunk_size(int size)
{
	if (size <= 100)
		return (size / 5);
	if (size <= 500)
		return (size / 11);
	return (size / 15);
}

static void	ft_push_chunk_to_b(
	t_stack **stack_a, t_stack **stack_b,
	int min, int max
) {
	int	size;
	int	pushed;
	int	limit;

	size = ft_stack_size(*stack_a);
	pushed = 0;
	limit = max - min + 1;
	while (size > 0 && pushed < limit)
	{
		if ((*stack_a)->value >= min && (*stack_a)->value <= max)
		{
			ft_pb(stack_a, stack_b);
			pushed++;
		}
		else
			ft_ra(stack_a);
		size--;
	}
}

static void	ft_merge_back(t_stack **stack_a, t_stack **stack_b)
{
	int	target;

	while (*stack_b)
	{
		target = ft_get_stack_target_index(*stack_a, (*stack_b)->value);
		ft_rotate_to_pos(stack_a, target, ft_stack_size(*stack_a), 1);
		ft_pa(stack_a, stack_b);
	}
	ft_rotate_to_pos(
		stack_a,
		ft_get_min_pos(*stack_a),
		ft_stack_size(*stack_a),
		1);
}

void	ft_strategy_medium(int size, t_stack **stack_a, t_stack **stack_b)
{
	int	min;
	int	max;
	int	c_size;
	int	i;
	int	c_max;

	if (size <= 5)
	{
		ft_strategy_simple(stack_a, stack_b);
		return ;
	}
	min = ft_get_min(*stack_a);
	max = ft_get_max(*stack_a);
	c_size = ft_get_chunk_size(size);
	i = 0;
	while (i * c_size <= (max - min))
	{
		c_max = min + (i + 1) * c_size - 1;
		if (c_max > max)
			c_max = max;
		ft_push_chunk_to_b(stack_a, stack_b, min + i * c_size, c_max);
		i++;
	}
	ft_merge_back(stack_a, stack_b);
}
