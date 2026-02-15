/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:30:05 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/15 20:13:25 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_type.h"
#include "push_swap.h"
#include "ft_utils.h"
#include "ft_test.h"

void	push_swap(int argc, char *argv[])
{
	t_options	opts;
	t_stack		*stack_a;
	t_stack		*stack_b;

	opts = ft_parse_options(argc, argv);
    printf("################### OPTIONS ###################\n");
	ft_print_options(opts);
    printf("################# END OPTIONS #################\n\n");
	stack_a = ft_stack_init(opts.numbers, opts.count);
	if (!stack_a)
		ft_error();
    printf("############### INITIAL STACK A ###############\n");
    ft_print_stack(stack_a);
    printf("############# END INITIAL STACK A #############\n\n");
	stack_b = NULL;
    printf("################### SORTING ###################\n");
	if (opts.strategy == STRATEGY_SIMPLE)
		ft_strategy_simple(opts.count, &stack_a, &stack_b);
	else if (opts.strategy == STRATEGY_ADAPTIVE)
		ft_strategy_simple(opts.count, &stack_a, &stack_b);
	else if (opts.strategy == STRATEGY_MEDIUM)
		ft_strategy_simple(opts.count, &stack_a, &stack_b);
	else if (opts.strategy == STRATEGY_COMPLEX)
		ft_strategy_simple(opts.count, &stack_a, &stack_b);
    printf("################# END SORTING #################\n\n");
    printf("############### SORTED  STACK A ###############\n");
	ft_print_stack(stack_a);
    printf("############# END SORTED  STACK A #############\n");
	ft_stack_free(&stack_a);
	ft_stack_free(&stack_b);
	free(opts.numbers);
}
