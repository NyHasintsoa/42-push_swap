/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_options.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:40:03 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/15 19:49:54 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_test.h"

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
