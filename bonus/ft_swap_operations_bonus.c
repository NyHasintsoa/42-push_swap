/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_operations_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:18:19 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/27 16:23:20 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "libft.h"

void	ft_sa(t_stack **stack_a)
{
	ft_stack_swap(stack_a);
}

void	ft_sb(t_stack **stack_b)
{
	ft_stack_swap(stack_b);
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_stack_swap(stack_a);
	ft_stack_swap(stack_b);
}
