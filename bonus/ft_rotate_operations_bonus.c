/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_operations_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:21:52 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/27 16:22:52 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "libft.h"

void	ft_ra(t_stack **stack_a)
{
	ft_stack_rotate(stack_a);
}

void	ft_rb(t_stack **stack_b)
{
	ft_stack_rotate(stack_b);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_stack_rotate(stack_a);
	ft_stack_rotate(stack_b);
}
