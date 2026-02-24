/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:18:19 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/24 19:52:13 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	ft_sa(t_stack **stack_a)
{
	ft_putstr("sa\n");
	ft_stack_swap(stack_a);
}

void	ft_sb(t_stack **stack_b)
{
	ft_putstr("sb\n");
	ft_stack_swap(stack_b);
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_putstr("ss\n");
	ft_stack_swap(stack_a);
	ft_stack_swap(stack_b);
}
