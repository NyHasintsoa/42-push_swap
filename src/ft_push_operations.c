/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:18:17 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/27 15:41:36 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "libft.h"

void	ft_pa(t_stack **stack_a, t_stack **stack_b, t_options opts)
{
	if (!opts.is_bench || opts.is_strategy)
		ft_putstr_fd("pa\n", 1);
	opts.bench->pa += 1;
	if (*stack_b)
		ft_stack_push(stack_a, ft_stack_top(stack_b));
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b, t_options opts)
{
	if (!opts.is_bench || opts.is_strategy)
		ft_putstr_fd("pb\n", 1);
	opts.bench->pb += 1;
	if (*stack_a)
		ft_stack_push(stack_b, ft_stack_top(stack_a));
}
