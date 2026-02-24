/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy_simple_helper.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:30:42 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/24 13:39:39 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	ft_get_min_pos(t_stack *stack)
{
	int		min;
	int		min_pos;
	int		pos;
	t_stack	*curr;

	if (!stack)
		return (-1);
	min = stack->value;
	min_pos = 0;
	pos = 0;
	curr = stack;
	while (curr)
	{
		if (curr->value < min)
		{
			min = curr->value;
			min_pos = pos;
		}
		curr = curr->next;
		pos++;
	}
	return (min_pos);
}

int	ft_get_max_pos(t_stack *stack)
{
	int		max;
	int		max_pos;
	int		pos;
	t_stack	*curr;

	max = stack->value;
	max_pos = 0;
	pos = 0;
	curr = stack;
	while (curr)
	{
		if (curr->value > max)
		{
			max = curr->value;
			max_pos = pos;
		}
		curr = curr->next;
		pos++;
	}
	return (max_pos);
}

int	get_target_index(t_stack *b, int val_a)
{
	t_stack	*curr;
	int		i;
	int		target_i;
	long	closest_smaller;

	curr = b;
	i = 0;
	target_i = -1;
	closest_smaller = -2147483649LL;
	while (curr)
	{
		if (curr->value < val_a && curr->value > closest_smaller)
		{
			closest_smaller = curr->value;
			target_i = i;
		}
		curr = curr->next;
		i++;
	}
	if (target_i == -1)
		return (ft_get_max_pos(b));
	return (target_i);
}
