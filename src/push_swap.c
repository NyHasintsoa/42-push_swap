/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:30:05 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/24 20:43:58 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_utils.h"
#include "ft_test.h"

static void	ft_sort_stack(
	t_options opts,
	t_stack **stack_a,
	t_stack **stack_b
) {
	if (opts.strategy == STRATEGY_SIMPLE)
		ft_strategy_simple(stack_a, stack_b);
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
	printf("################ CHECK STACK A ################\n");
	if (ft_check_stack_sorted(stack_a, opts.count))
		printf("Stack sorted successfully !\n");
	else
		printf("Stack need to be sorted !\n");
	printf("############## END CHECK STACK A ##############\n");
	ft_stack_free(&stack_a);
	ft_stack_free(&stack_b);
}
