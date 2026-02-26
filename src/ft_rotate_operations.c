/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:21:52 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/26 09:38:54 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_type.h"
#include "push_swap.h"
#include "ft_utils.h"

void	ft_ra(t_stack **stack_a, t_options opts)
{
	if (!opts.is_bench)
		ft_putstr("ra\n");
	opts.bench->ra += 1;
	ft_stack_rotate(stack_a);
}

void	ft_rb(t_stack **stack_b, t_options opts)
{
	if (!opts.is_bench)
		ft_putstr("rb\n");
	opts.bench->rb += 1;
	ft_stack_rotate(stack_b);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b, t_options opts)
{
	if (!opts.is_bench)
		ft_putstr("rr\n");
	opts.bench->rr += 1;
	ft_stack_rotate(stack_a);
	ft_stack_rotate(stack_b);
}
