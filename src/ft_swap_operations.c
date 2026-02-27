/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:18:19 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/27 15:41:36 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "libft.h"

void	ft_sa(t_stack **stack_a, t_options opts)
{
	if (!opts.is_bench || opts.is_strategy)
		ft_putstr_fd("sa\n", 1);
	opts.bench->sa += 1;
	ft_stack_swap(stack_a);
}

void	ft_sb(t_stack **stack_b, t_options opts)
{
	if (!opts.is_bench || opts.is_strategy)
		ft_putstr_fd("sb\n", 1);
	opts.bench->sb += 1;
	ft_stack_swap(stack_b);
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b, t_options opts)
{
	if (!opts.is_bench || opts.is_strategy)
		ft_putstr_fd("ss\n", 1);
	opts.bench->ss += 1;
	ft_stack_swap(stack_a);
	ft_stack_swap(stack_b);
}
