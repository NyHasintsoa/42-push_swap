/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:00:00 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/11 19:43:11 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stack_new(int value, int index)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = index;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

t_stack	*ft_stack_top(t_stack **stack)
{
	t_stack	*node;

	if (!stack || !*stack)
		return (NULL);
	node = *stack;
	*stack = (*stack)->next;
	if (*stack)
		(*stack)->prev = NULL;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

int	ft_stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

void	ft_stack_free(t_stack **stack)
{
	t_stack	*current;
	t_stack	*next;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stack = NULL;
}

t_stack	*ft_stack_init(int *numbers, int count)
{
	t_stack	*stack;
	t_stack	*node;
	int		i;

	if (!numbers || count <= 0)
		return (NULL);
	stack = NULL;
	i = 0;
	while (i < count)
	{
		node = ft_stack_new(numbers[i], i);
		if (!node)
		{
			ft_stack_free(&stack);
			return (NULL);
		}
		ft_stack_push(&stack, node);
		i++;
	}
	return (stack);
}
