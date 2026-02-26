/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_operations.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:19:39 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/26 09:38:54 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_utils.h"

void	ft_rra(t_stack **stack_a, t_options opts)
{
	if (!opts.is_bench)
		ft_putstr("rra\n");
	opts.bench->rra += 1;
	ft_stack_reverse_rotate(stack_a);
}

void	ft_rrb(t_stack **stack_b, t_options opts)
{
	if (!opts.is_bench)
		ft_putstr("rrb\n");
	opts.bench->rrb += 1;
	ft_stack_reverse_rotate(stack_b);
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b, t_options opts)
{
	if (!opts.is_bench)
		ft_putstr("rrr\n");
	opts.bench->rrr += 1;
	ft_stack_reverse_rotate(stack_a);
	ft_stack_reverse_rotate(stack_b);
}
