/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_operations_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:19:39 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/27 16:22:29 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "libft.h"

void	ft_rra(t_stack **stack_a)
{
	ft_stack_reverse_rotate(stack_a);
}

void	ft_rrb(t_stack **stack_b)
{
	ft_stack_reverse_rotate(stack_b);
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_stack_reverse_rotate(stack_a);
	ft_stack_reverse_rotate(stack_b);
}
