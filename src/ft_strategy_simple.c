/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy_simple.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:00:00 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/24 19:49:56 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

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
			ft_get_stack_target_index(*stack_b, (*stack_a)->value),
			ft_stack_size(*stack_b), 0);
		ft_pb(stack_a, stack_b);
	}
	ft_sort_three(stack_a);
	while (*stack_b)
	{
		ft_rotate_to_pos(
			stack_a,
			ft_get_stack_target_index(*stack_a, (*stack_b)->value),
			ft_stack_size(*stack_a), 1);
		ft_pa(stack_a, stack_b);
	}
	ft_rotate_to_pos(
		stack_a,
		ft_get_min_pos(*stack_a),
		ft_stack_size(*stack_a), 1);
}
