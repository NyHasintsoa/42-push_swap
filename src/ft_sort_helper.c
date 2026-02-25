/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_helper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 19:41:32 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/26 01:40:18 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_min_pos(t_stack *stack)
{
	int		min;
	int		min_pos;
	int		pos;
	t_stack	*current;

	if (!stack)
		return (-1);
	min = stack->value;
	min_pos = 0;
	pos = 0;
	current = stack;
	while (current)
	{
		if (current->value < min)
		{
			min = current->value;
			min_pos = pos;
		}
		current = current->next;
		pos++;
	}
	return (min_pos);
}

int	ft_get_max_pos(t_stack *stack)
{
	int		max;
	int		max_pos;
	int		pos;
	t_stack	*current;

	max = stack->value;
	max_pos = 0;
	pos = 0;
	current = stack;
	while (current)
	{
		if (current->value > max)
		{
			max = current->value;
			max_pos = pos;
		}
		current = current->next;
		pos++;
	}
	return (max_pos);
}

void	ft_sort_three(t_stack **stack)
{
	int	first;
	int	second;
	int	third;

	first = (*stack)->value;
	second = (*stack)->next->value;
	third = (*stack)->next->next->value;
	if (first > second && second < third && first < third)
		ft_sa(stack);
	else if (first > second && second > third)
	{
		ft_sa(stack);
		ft_rra(stack);
	}
	else if (first > second && second < third && first > third)
		ft_ra(stack);
	else if (first < second && second > third && first < third)
	{
		ft_sa(stack);
		ft_ra(stack);
	}
	else if (first < second && second > third && first > third)
		ft_rra(stack);
}
