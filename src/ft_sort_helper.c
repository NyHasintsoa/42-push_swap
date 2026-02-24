/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_helper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 19:41:32 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/24 21:02:45 by nramalan         ###   ########.fr       */
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

int	ft_get_stack_target_index(t_stack *stack, int value)
{
	t_stack	*current;
	int		i;
	int		target_i;
	long	closest_larger;

	current = stack;
	i = 0;
	target_i = -1;
	closest_larger = 2147483648LL;
	while (current)
	{
		if (current->value > value && current->value < closest_larger)
		{
			closest_larger = current->value;
			target_i = i;
		}
		current = current->next;
		i++;
	}
	if (target_i == -1)
		return (ft_get_min_pos(stack));
	return (target_i);
}

void	ft_rotate_to_pos(t_stack **stack, int pos, int size, int is_a)
{
	if (pos <= size / 2)
	{
		while (pos > 0)
		{
			if (is_a)
				ft_ra(stack);
			else
				ft_rb(stack);
			pos--;
		}
	}
	else
	{
		while (pos < size)
		{
			if (is_a)
				ft_rra(stack);
			else
				ft_rrb(stack);
			pos++;
		}
	}
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
