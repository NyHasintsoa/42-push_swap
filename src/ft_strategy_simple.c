/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy_simple.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:00:00 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/24 22:13:28 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

static void	ft_push_to_b(t_stack **a, t_stack **b)
{
	int	target;

	if (ft_stack_size(*a) > 3)
		ft_pb(a, b);
	if (ft_stack_size(*a) > 3)
		ft_pb(a, b);
	while (ft_stack_size(*a) > 3)
	{
		target = ft_get_stack_target_index(*b, (*a)->value);
		ft_rotate_to_pos(b, target, ft_stack_size(*b), 0);
		ft_pb(a, b);
	}
}

static void	ft_push_to_a(t_stack **a, t_stack **b)
{
	int	target;

	while (*b)
	{
		target = ft_get_stack_target_index(*a, (*b)->value);
		ft_rotate_to_pos(a, target, ft_stack_size(*a), 1);
		ft_pa(a, b);
	}
	ft_rotate_to_pos(a, ft_get_min_pos(*a), ft_stack_size(*a), 1);
}

void	ft_strategy_simple(int size, t_stack **stack_a, t_stack **stack_b)
{
	if (size <= 1)
		return ;
	if (size == 2)
	{
		if ((*stack_a)->value > (*stack_a)->next->value)
			ft_sa(stack_a);
		return ;
	}
	if (size == 3)
	{
		ft_sort_three(stack_a);
		return ;
	}
	ft_push_to_b(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_push_to_a(stack_a, stack_b);
}
