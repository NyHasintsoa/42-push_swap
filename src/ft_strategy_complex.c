/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy_complex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 21:00:00 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/25 13:38:30 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_utils.h"

static int	ft_get_max_bits(t_stack *stack)
{
	int	max;
	int	bits;

	max = ft_get_max(stack);
	bits = 0;
	while (max > 0)
	{
		max >>= 1;
		bits++;
	}
	return (bits);
}

static void	ft_radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	bits;
	int	i;
	int	j;
	int	stack_size;

	bits = ft_get_max_bits(*stack_a);
	i = 0;
	while (i < bits)
	{
		j = 0;
		stack_size = ft_stack_size(*stack_a);
		while (j < stack_size)
		{
			if (((*stack_a)->value >> i) & 1)
				ft_ra(stack_a);
			else
				ft_pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			ft_pa(stack_a, stack_b);
		i++;
	}
}

void	ft_strategy_complex(int size, t_stack **stack_a, t_stack **stack_b)
{
	if (size <= 3)
	{
		if (size == 3)
			ft_sort_three(stack_a);
		else if (size == 2 && (*stack_a)->value > (*stack_a)->next->value)
			ft_sa(stack_a);
		return ;
	}
	if (size <= 50)
		return (ft_strategy_medium(size, stack_a, stack_b));
	ft_radix_sort(stack_a, stack_b);
}
