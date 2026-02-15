/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:21:52 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/15 19:48:24 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_type.h"
#include "push_swap.h"
#include "libft.h"

void	ft_ra(t_stack **stack_a)
{
	ft_putstr("ra\n");
	ft_stack_rotate(stack_a);
}

void	ft_rb(t_stack **stack_b)
{
	ft_putstr("rb\n");
	ft_stack_rotate(stack_b);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_putstr("rr\n");
	ft_stack_rotate(stack_a);
	ft_stack_rotate(stack_b);
}
