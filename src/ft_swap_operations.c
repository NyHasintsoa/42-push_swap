/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:18:19 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/26 09:13:25 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	ft_sa(t_stack **stack_a, t_options opts)
{
	if (!opts.is_bench)
		ft_putstr("sa\n");
	opts.bench->sa += 1;
	ft_stack_swap(stack_a);
}

void	ft_sb(t_stack **stack_b, t_options opts)
{
	if (!opts.is_bench)
		ft_putstr("sb\n");
	opts.bench->sb += 1;
	ft_stack_swap(stack_b);
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b, t_options opts)
{
	if (!opts.is_bench)
		ft_putstr("ss\n");
	opts.bench->ss += 1;
	ft_stack_swap(stack_a);
	ft_stack_swap(stack_b);
}
