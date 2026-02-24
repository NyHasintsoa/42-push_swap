/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy_complex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 21:00:00 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/24 21:19:24 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_utils.h"

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

static void	ft_reinsert_from_b(t_stack **stack_a, t_stack **stack_b)
{
	int	target;

	while (*stack_b)
	{
		target = ft_get_stack_target_index(*stack_a, (*stack_b)->value);
		ft_rotate_to_pos(stack_a, target, ft_stack_size(*stack_a), 1);
		ft_pa(stack_a, stack_b);
	}
	ft_rotate_to_pos(
		stack_a,
		ft_get_min_pos(*stack_a),
		ft_stack_size(*stack_a), 1);
}

void	ft_strategy_complex(int size, t_stack **stack_a, t_stack **stack_b)
{
	int	pivot;
	int	pushed;
	int	rots;

	if (size <= 3)
	{
		if (size == 3)
			ft_sort_three(stack_a);
		else if (size == 2 && (*stack_a)->value > (*stack_a)->next->value)
			ft_sa(stack_a);
		return ;
	}
	if (size <= 100)
		return (ft_strategy_medium(size, stack_a, stack_b));
	pivot = ft_get_pivot(*stack_a, size);
	pushed = ft_partition_a(stack_a, stack_b, pivot, size);
	rots = size - pushed;
	ft_restore_positions(stack_a, rots);
	if (rots > 3)
		ft_strategy_complex(rots, stack_a, stack_b);
	ft_reinsert_from_b(stack_a, stack_b);
}
