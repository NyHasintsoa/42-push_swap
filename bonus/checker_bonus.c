/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 11:58:29 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/27 23:17:09 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"
#include "ft_utils.h"
#include "get_next_line.h"

static int	ft_exec_operation(
	const char *cmd,
	t_stack **stack_a,
	t_stack **stack_b
) {
	if (ft_exec_push(cmd, stack_a, stack_b))
		return (1);
	if (ft_exec_reverse(cmd, stack_a, stack_b))
		return (1);
	if (ft_exec_rotate(cmd, stack_a, stack_b))
		return (1);
	if (ft_exec_swap(cmd, stack_a, stack_b))
		return (1);
	return (0);
}

static int	ft_sort_stack(t_stack **stack_a, t_stack **stack_b)
{
	char	*line;
	int		result;

	line = get_next_line(0);
	while (line)
	{
		if (line[ft_strlen(line) - 1] == '\n')
			line[ft_strlen(line) - 1] = '\0';
		result = ft_exec_operation(line, stack_a, stack_b);
		free(line);
		if (!result)
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
		line = get_next_line(0);
	}
	return (1);
}

void	push_swap_checker(t_opts_checker opts)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	int			result;

	stack_a = ft_stack_init(opts.numbers, opts.size);
	if (!stack_a)
	{
		free(opts.numbers);
		ft_error();
	}
	stack_b = NULL;
	result = ft_sort_stack(&stack_a, &stack_b);
	if (result)
	{
		if (ft_check_stack_sorted(stack_a, opts.size)
			&& (ft_stack_size(stack_b) == 0))
			ft_putstr_fd("OK\n", 1);
		else
			ft_putstr_fd("KO\n", 1);
	}
	ft_stack_free(&stack_a);
	ft_stack_free(&stack_b);
}
