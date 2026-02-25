/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy_simple.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:00:00 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/25 23:51:34 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

static void	ft_put_min_top(t_stack **stack_a)
{
	int	min_index;
	int	size;
	int	reverse;

	min_index = ft_get_min_pos(*stack_a);
	if (min_index < 0)
		return ;
	size = ft_stack_size(*stack_a);
	if (min_index < size / 2)
	{
		while (min_index--)
			ft_ra(stack_a);
		return ;
	}
	reverse = size - min_index;
	while (reverse--)
		ft_rra(stack_a);
}

void	ft_strategy_simple(int size, t_stack **stack_a, t_stack **stack_b)
{
	while (*stack_a && (*stack_a)->next)
	{
		ft_put_min_top(stack_a);
		if (ft_check_stack_sorted(*stack_a, size))
			break ;
		ft_pb(stack_a, stack_b);
	}
	while (*stack_b)
		ft_pa(stack_a, stack_b);
}
