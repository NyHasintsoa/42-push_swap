/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy_simple.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:00:00 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/24 12:41:36 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_test.h"
#include <stdio.h>

static int	ft_find_min_position(t_stack *stack)
{
	int	min;
	int	pos;
	int	i;
	t_stack	*current;

	if (!stack)
		return (-1);
	min = stack->value;
	pos = 0;
	i = 0;
	current = stack;
	while (current)
	{
		if (current->value < min)
		{
			min = current->value;
			pos = i;
		}
		current = current->next;
		i++;
	}
	return (pos);
}

static void	ft_rotate_to_top(t_stack **stack, int pos, int size)
{
	int	i;

	i = 0;
	if (pos <= size / 2)
	{
		while (i < pos)
		{
			ft_ra(stack);
			i++;
		}
	}
	else
	{
		while (i < size - pos)
		{
			ft_rra(stack);
			i++;
		}
	}
}

void	ft_strategy_simple(t_stack **stack_a, t_stack **stack_b)
{
	int	min_pos;

	while (ft_stack_size(*stack_a) > 0)
	{
		min_pos = ft_find_min_position(*stack_a);
		ft_rotate_to_top(stack_a, min_pos, ft_stack_size(*stack_a));
		ft_pb(stack_a, stack_b);
	}
	while (*stack_b)
	{
		ft_pa(stack_a, stack_b);
	}
}
