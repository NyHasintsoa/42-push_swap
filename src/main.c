/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:59:46 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/10 23:45:52 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_utils.h"
#include "libft.h"

void	ft_print_options(t_options opts)
{
	const char	*strategy_names[] = {"SIMPLE", "MEDIUM", "COMPLEX", "ADAPTIVE"};

	ft_putstr("Strategy: ");
	ft_putstr((char *)strategy_names[opts.strategy]);
	ft_putstr("\n");
	if (opts.bench)
	{
		ft_putstr("Benchmark: enabled\n");
	}
	ft_putstr("Numbers count: ");
	ft_putstr("OK\n");
}

int	main(int argc, char *argv[])
{
	t_options	opts;

	opts = ft_parse_options(argc, argv);
    ft_print_options(opts);
	free(opts.numbers);
	return (0);
}
