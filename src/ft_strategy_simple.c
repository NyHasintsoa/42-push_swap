/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy_simple.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:00:00 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/11 18:26:42 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	ft_strategy_simple(t_stack **stack_a, t_stack **stack_b)
{
	int		size_a;
	int		i;

	if (!stack_a || !*stack_a)
		return ;
	size_a = ft_stack_size(*stack_a);
	i = 0;
	while (i < size_a)
	{
		ft_putstr("pb\n");
		ft_stack_push(stack_b, ft_stack_top(stack_a));
		if ((*stack_b && (*stack_b)->next)
			&& ((*stack_b)->value < (*stack_b)->next->value))
		{
			ft_putstr("rb\n");
			ft_stack_rotate(stack_b);
		}
		i++;
	}
	while (*stack_b)
	{
		ft_putstr("pa\n");
		ft_stack_push(stack_a, ft_stack_top(stack_b));
	}
}
