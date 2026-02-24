/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy_complex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 21:00:00 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/24 20:42:32 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_utils.h"

static void	ft_sort_array(int *arr, int size)
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

static int	ft_get_pivot(t_stack *stack, int size)
{
	int	*arr;
	int	pivot;

	arr = ft_stack_to_array(stack, size);
	if (!arr)
		return (0);
	ft_sort_array(arr, size);
	pivot = arr[size / 2];
	free(arr);
	return (pivot);
}

static int	ft_partition_a(
	t_stack **stack_a, t_stack **stack_b,
	int pivot, int size
) {
	int	pushed;
	int	i;

	pushed = 0;
	i = 0;
	while (i < size)
	{
		if ((*stack_a)->value <= pivot)
		{
			ft_pb(stack_a, stack_b);
			pushed++;
		}
		else
			ft_ra(stack_a);
		i++;
	}
	return (pushed);
}

static void	ft_restore_positions(t_stack **a, int rotations)
{
	while (rotations > 0)
	{
		ft_rra(a);
		rotations--;
	}
}

void	ft_strategy_complex(int size, t_stack **a, t_stack **b)
{
	int	pivot;
	int	pushed;
	int	rotations;

	if (size <= 5)
	{
		ft_strategy_simple(a, b);
		return ;
	}
	if (size <= 100)
	{
		ft_strategy_medium(size, a, b);
		return ;
	}
	pivot = ft_get_pivot(*a, size);
	pushed = ft_partition_a(a, b, pivot, size);
	rotations = size - pushed;
	ft_restore_positions(a, rotations);
	ft_strategy_complex(pushed, b, a);
	ft_strategy_complex(rotations, a, b);
}
