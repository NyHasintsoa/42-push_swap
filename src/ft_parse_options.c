/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_options.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:30:00 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/26 09:39:33 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_utils.h"

static int	ft_is_option(const char *str)
{
	if (!str)
		return (0);
	if ((str[0] == '-') && (str[1] == '-'))
	{
		return (1);
	}
	return (0);
}

static int	ft_parse_bench(int argc)
{
	if (argc < 2)
		return (0);
	return (1);
}

static int	ft_check_dup(int *numbers, int size)
{
	int	length;

	length = 0;
	while (length < size)
		length++;
	if (ft_has_dup(numbers, length))
	{
		free(numbers);
		ft_error();
	}
	return (length);
}

static int	*ft_get_numbers(int argc, char *argv[], int index)
{
	if ((argc - index) > 1)
		return (ft_check_args(argc - index + 1, &argv[index - 1]));
	else
		return (ft_check_str(argv[index]));
}

t_options	ft_parse_options(int argc, char *argv[])
{
	t_options	opts;
	int			i;
	int			size;

	opts.strategy = STRATEGY_ADAPTIVE;
	opts.is_bench = 0;
	opts.numbers = NULL;
	i = 1;
	while (i < argc && ft_is_option(argv[i]))
	{
		if (ft_parse_strategy(argv[i]) != STRATEGY_UNKNOWN)
			opts.strategy = ft_parse_strategy(argv[i]);
		else if (ft_strcmp(argv[i], "--bench") == 0)
			opts.is_bench = ft_parse_bench(argc);
		else
			ft_error();
		i++;
	}
	size = argc - i;
	if (size == 1)
		size = ft_count_numbers(argv[i], ' ');
	opts.numbers = ft_get_numbers(argc, argv, i);
	opts.count = ft_check_dup(opts.numbers, size);
	return (opts);
}
