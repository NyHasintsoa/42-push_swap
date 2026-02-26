/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy_complex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 21:00:00 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/26 07:48:36 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_utils.h"

static void	rotate_to_top(t_stack **stack, int pos, char name)
{
	int	size;

	size = ft_stack_size(*stack);
	if (pos <= size / 2)
	{
		while (pos-- > 0)
		{
			if (name == 'a')
				ft_ra(stack);
			else
				ft_rb(stack);
		}
	}
	else
	{
		pos = size - pos;
		while (pos-- > 0)
		{
			if (name == 'a')
				ft_rra(stack);
			else
				ft_rrb(stack);
		}
	}
}

static void	push_to_b_by_chunks(t_stack **stack_a, t_stack **stack_b, int chunk)
{
	int	i;

	i = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i)
		{
			ft_pb(stack_a, stack_b);
			ft_rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= i + chunk)
		{
			ft_pb(stack_a, stack_b);
			i++;
		}
		else
			ft_ra(stack_a);
	}
}

static void	sort_back_to_a(t_stack **stack_b, t_stack **stack_a)
{
	int	max_pos;

	while (*stack_b)
	{
		max_pos = ft_get_max_pos(*stack_b);
		rotate_to_top(stack_b, max_pos, 'b');
		ft_pa(stack_a, stack_b);
	}
}

void	ft_strategy_complex(t_options opts, t_stack **stack_a, t_stack **stack_b)
{
	int	chunk;

	if (opts.count <= 100)
		chunk = 15;
	else
		chunk = 35;
	push_to_b_by_chunks(stack_a, stack_b, chunk);
	sort_back_to_a(stack_b, stack_a);
}
