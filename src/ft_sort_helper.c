/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_helper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 19:41:32 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/26 07:47:30 by nramalan         ###   ########.fr       */
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

void	ft_sort_three(t_stack **stack, t_options opts)
{
	int	first;
	int	second;
	int	third;
    (void) opts;

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

static void	ft_put_min_top(t_stack **stack_a)
{
	int	min_pos;
	int	size;

	min_pos = ft_get_min_pos(*stack_a);
	size = ft_stack_size(*stack_a);
	if (min_pos <= size / 2)
	{
		while (min_pos > 0)
		{
			ft_ra(stack_a);
			min_pos--;
		}
	}
	else
	{
		min_pos = size - min_pos;
		while (min_pos > 0)
		{
			ft_rra(stack_a);
			min_pos--;
		}
	}
}

void	ft_sort_min(t_stack **stack_a, t_stack **stack_b, t_options opts)
{
	int	push_count;

	push_count = opts.count - 3;
	while (push_count > 0)
	{
		ft_put_min_top(stack_a);
		if (ft_check_stack_sorted(*stack_a, opts.count))
			break ;
		ft_pb(stack_a, stack_b);
		push_count--;
	}
	ft_sort_three(stack_a, opts);
	while (*stack_b)
		ft_pa(stack_a, stack_b);
}
