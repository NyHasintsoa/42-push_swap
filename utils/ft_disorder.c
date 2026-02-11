/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disorder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 20:33:48 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/11 20:52:24 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_type.h"

float	ft_compute_disorder(t_options opts)
{
	int	i;
	int	j;
	int	mistakes;
	int	total_pairs;

	i = 0;
	mistakes = 0;
	total_pairs = 0;
	while (i < (opts.count - 1))
	{
		j = i + 1;
		while (j < (opts.count - 1))
		{
			total_pairs += 1;
			if (opts.numbers[i] > opts.numbers[j])
				mistakes += 1;
			j++;
		}
		i++;
	}
	return (mistakes / total_pairs);
}
