/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_operations.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:19:39 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/27 13:39:26 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	ft_rra(t_stack **stack_a, t_options opts)
{
	if (!opts.is_bench)
		ft_putstr_fd("rra\n", 1);
	opts.bench->rra += 1;
	ft_stack_reverse_rotate(stack_a);
}

void	ft_rrb(t_stack **stack_b, t_options opts)
{
	if (!opts.is_bench)
		ft_putstr_fd("rrb\n", 1);
	opts.bench->rrb += 1;
	ft_stack_reverse_rotate(stack_b);
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b, t_options opts)
{
	if (!opts.is_bench)
		ft_putstr_fd("rrr\n", 1);
	opts.bench->rrr += 1;
	ft_stack_reverse_rotate(stack_a);
	ft_stack_reverse_rotate(stack_b);
}
