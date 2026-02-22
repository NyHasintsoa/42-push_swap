/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:59:46 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/22 18:35:26 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_options	opts;

	if ((argc - 1) == 0)
		return (0);
	opts = ft_parse_options(argc, argv);
	if (ft_check_array_sorted(opts.numbers, opts.count))
	{
		free(opts.numbers);
		return (0);
	}
	push_swap(opts);
	free(opts.numbers);
	return (0);
}
