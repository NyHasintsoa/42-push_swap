/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy_simple.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:00:00 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/24 13:52:43 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

static void	ft_rotate_to_pos(t_stack **stack, int pos, int size, int is_a)
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

static int	get_target_index_a(t_stack *stack_a, int value_b)
{
	t_stack	*current;
	int		i;
	int		target_i;
	long	closest_larger;

	current = stack_a;
	i = 0;
	target_i = -1;
	closest_larger = 2147483648LL;
	while (current)
	{
		if (current->value > value_b && current->value < closest_larger)
		{
			closest_larger = current->value;
			target_i = i;
		}
		current = current->next;
		i++;
	}
	if (target_i == -1)
		return (ft_get_min_pos(stack_a));
	return (target_i);
}

static void	ft_sort_three(t_stack **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->value;
	second = (*stack_a)->next->value;
	third = (*stack_a)->next->next->value;
	if (first > second && second < third && first < third)
		ft_sa(stack_a);
	else if (first > second && second > third)
	{
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if (first > second && second < third && first > third)
		ft_ra(stack_a);
	else if (first < second && second > third && first < third)
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
	else if (first < second && second > third && first > third)
		ft_rra(stack_a);
}

void	ft_strategy_simple(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stack_size(*stack_a) > 3)
		ft_pb(stack_a, stack_b);
	if (ft_stack_size(*stack_a) > 3)
		ft_pb(stack_a, stack_b);
	while (ft_stack_size(*stack_a) > 3)
	{
		ft_rotate_to_pos(
			stack_b,
			get_target_index(*stack_b, (*stack_a)->value),
			ft_stack_size(*stack_b), 0);
		ft_pb(stack_a, stack_b);
	}
	ft_sort_three(stack_a);
	while (*stack_b)
	{
		ft_rotate_to_pos(
			stack_a,
			get_target_index_a(*stack_a, (*stack_b)->value),
			ft_stack_size(*stack_a), 1);
		ft_pa(stack_a, stack_b);
	}
	ft_rotate_to_pos(
		stack_a,
		ft_get_min_pos(*stack_a),
		ft_stack_size(*stack_a), 1);
}
