/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_operations_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:18:17 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/27 16:22:05 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "libft.h"

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_b)
		ft_stack_push(stack_a, ft_stack_top(stack_b));
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_a)
		ft_stack_push(stack_b, ft_stack_top(stack_a));
}
