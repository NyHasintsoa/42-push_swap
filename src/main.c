/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:59:46 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/11 20:50:23 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_utils.h"
#include "libft.h"
#include <stdio.h>

void	ft_print_options(t_options opts)
{
	const char	*strategy_names[] = {"SIMPLE", "MEDIUM", "COMPLEX", "ADAPTIVE"};

	ft_putstr("Strategy: ");
	ft_putstr((char *) strategy_names[opts.strategy]);
	ft_putstr("\n");
	if (opts.bench)
	{
		ft_putstr("Benchmark: enabled\n");
	}
	printf("Numbers count: %d\n", opts.count);
	ft_putstr("OK\n");
}

int	main(int argc, char *argv[])
{
	t_options	opts;
	t_stack		*stack_a;
	t_stack		*stack_b;

	opts = ft_parse_options(argc, argv);
	ft_print_options(opts);
	stack_a = ft_stack_init(opts.numbers, opts.count);
	stack_b = NULL;
	printf("\n###\tOperations\t###\n\n");
    printf("Compute Disorder = '%2f'\n", ft_compute_disorder(opts));
	push_swap(opts, stack_a, stack_b);
	ft_stack_free(&stack_a);
	ft_stack_free(&stack_b);
	free(opts.numbers);
	return (0);
}
