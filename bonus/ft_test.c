/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:36:36 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/27 18:00:25 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"
#include "ft_utils.h"
#include <stdio.h>

void	ft_print_stack(t_stack *stack)
{
	t_stack	*lst;
	int		i;
	int		size;

	lst = stack;
	size = ft_stack_size(stack);
	i = 0;
	while (i < size)
	{
		printf("tab[%d] = '%d'\n", i, lst->value);
		lst = lst->next;
		i++;
	}
}

void	ft_print_numbers(t_opts_checker opts)
{
	int		i;

	i = 0;
	while (i < opts.size)
	{
		printf("tab[%d] = '%d'\n", i, opts.numbers[i]);
		i++;
	}
}