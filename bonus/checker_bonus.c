/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 11:58:29 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/27 18:08:04 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"
#include "ft_utils.h"

void	ft_print_stack(t_stack *stack);

void push_swap_checker(t_opts_checker opts)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = ft_stack_init(opts.numbers, opts.size);
	if (!stack_a)
	{
		free(opts.numbers);
		ft_error();
	}
	stack_b = NULL;
    ft_print_stack(stack_a);
	ft_stack_free(&stack_a);
	ft_stack_free(&stack_b);
}