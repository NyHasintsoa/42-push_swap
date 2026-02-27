/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:21:52 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/27 13:39:19 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	ft_ra(t_stack **stack_a, t_options opts)
{
	if (!opts.is_bench)
		ft_putstr_fd("ra\n", 1);
	opts.bench->ra += 1;
	ft_stack_rotate(stack_a);
}

void	ft_rb(t_stack **stack_b, t_options opts)
{
	if (!opts.is_bench)
		ft_putstr_fd("rb\n", 1);
	opts.bench->rb += 1;
	ft_stack_rotate(stack_b);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b, t_options opts)
{
	if (!opts.is_bench)
		ft_putstr_fd("rr\n", 1);
	opts.bench->rr += 1;
	ft_stack_rotate(stack_a);
	ft_stack_rotate(stack_b);
}
