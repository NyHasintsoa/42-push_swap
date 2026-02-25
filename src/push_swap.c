/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:30:05 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/26 01:56:32 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_utils.h"

static int	ft_short_sort(
	t_options opts,
	t_stack **stack_a,
	t_stack **stack_b
) {
	if (opts.count == 2)
	{
		ft_sa(stack_a);
		return (1);
	}
	else if (opts.count == 3)
	{
		ft_sort_three(stack_a);
		return (1);
	}
	else if (opts.count == 4)
	{
		ft_sort_min(stack_a, stack_b, 4);
		return (1);
	}
	else if (opts.count == 5)
	{
		ft_sort_min(stack_a, stack_b, 5);
		return (1);
	}
	return (0);
}

static void	ft_sort_stack(
	t_options opts,
	t_stack **stack_a,
	t_stack **stack_b
) {
	if (ft_short_sort(opts, stack_a, stack_b))
		return ;
	if (opts.strategy == STRATEGY_SIMPLE)
		ft_strategy_simple(opts.count, stack_a, stack_b);
	else if (opts.strategy == STRATEGY_ADAPTIVE)
		ft_strategy_adaptive(
			opts.count,
			stack_a, stack_b,
			ft_compute_disorder(opts));
	else if (opts.strategy == STRATEGY_MEDIUM)
		ft_strategy_medium(opts.count, stack_a, stack_b);
	else if (opts.strategy == STRATEGY_COMPLEX)
		ft_strategy_complex(opts.count, stack_a, stack_b);
}

void	push_swap(t_options opts)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = ft_stack_init(opts.numbers, opts.count);
	if (!stack_a)
	{
		free(opts.numbers);
		ft_error();
	}
	stack_b = NULL;
	ft_sort_stack(opts, &stack_a, &stack_b);
	ft_stack_free(&stack_a);
	ft_stack_free(&stack_b);
}
