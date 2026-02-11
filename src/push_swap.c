/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:30:05 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/11 18:52:26 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_type.h"
#include "push_swap.h"
#include "ft_utils.h"

void	push_swap(t_options options, t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_a)
	{
		ft_error();
	}
	if (options.strategy == STRATEGY_SIMPLE)
		return (ft_strategy_simple(&stack_a, &stack_b));
	if (options.strategy == STRATEGY_ADAPTIVE)
		return (ft_strategy_simple(&stack_a, &stack_b));
	if (options.strategy == STRATEGY_MEDIUM)
		return (ft_strategy_simple(&stack_a, &stack_b));
	if (options.strategy == STRATEGY_COMPLEX)
		return (ft_strategy_simple(&stack_a, &stack_b));
}
