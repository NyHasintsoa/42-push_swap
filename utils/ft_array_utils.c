/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 20:35:04 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/24 21:19:27 by nramalan         ###   ########.fr       */
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

void	ft_sort_array(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}