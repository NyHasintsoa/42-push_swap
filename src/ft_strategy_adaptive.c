/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy_adaptive.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 21:15:00 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/24 22:10:34 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_strategy_adaptive(
	int size,
	t_stack **stack_a,
	t_stack **stack_b,
	float disorder
) {
	if (disorder < 0.2)
		ft_strategy_simple(size, stack_a, stack_b);
	else if (disorder >= 0.2 && disorder < 0.5)
		ft_strategy_medium(size, stack_a, stack_b);
	else if (disorder >= 0.5)
		ft_strategy_complex(size, stack_a, stack_b);
}
