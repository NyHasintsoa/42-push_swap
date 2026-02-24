/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy_medium.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 20:30:00 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/24 13:54:26 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_type.h"

void	ft_strategy_medium(int size, t_stack **stack_a, t_stack **stack_b)
{
	(void) size;
	ft_strategy_simple(stack_a, stack_b);
}
