/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_to_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 20:35:04 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/24 20:43:32 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_stack_to_array(t_stack *stack, int size)
{
	int		*arr;
	t_stack	*current;
	int		i;

	arr = (int *) malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	current = stack;
	i = 0;
	while (i < size)
	{
		arr[i] = current->value;
		current = current->next;
		i++;
	}
	return (arr);
}
