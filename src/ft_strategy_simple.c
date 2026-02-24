/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy_simple.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:00:00 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/24 20:52:46 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

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
