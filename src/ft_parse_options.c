/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_options.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:30:00 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/11 00:01:22 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_utils.h"
#include "libft.h"

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

static void ft_check_dup(int *numbers)
{
    int length;

    length = 0;
	while (numbers && numbers[length])
		length++;
	if (ft_has_dup(numbers, length))
	{
		free(numbers);
		ft_error();
	}
}

static int *ft_get_numbers(int argc, char *argv[], int index)
{
	if ((argc - index) > 1)
		return ft_check_args(argc - index + 1, &argv[index - 1]);
	else
		return ft_check_str(argv[index]);
}

t_options	ft_parse_options(int argc, char *argv[])
{
	t_options	opts;
	int			i;

	opts.strategy = STRATEGY_ADAPTIVE;
	opts.bench = 0;
	opts.numbers = NULL;
	opts.count = 0;
	i = 1;
    if ((argc - 1) == 0)
    {
        ft_exit();
    }
	while (i < argc && ft_is_option(argv[i]))
	{
		if (ft_parse_strategy(argv[i]) != STRATEGY_UNKNOWN)
			opts.strategy = ft_parse_strategy(argv[i]);
		else if (ft_strcmp(argv[i], "--bench") == 0)
			opts.bench = ft_parse_bench(argc);
		else
			ft_error();
		i++;
	}
    opts.numbers = ft_get_numbers(argc, argv, i);
	ft_check_dup(opts.numbers);
	return (opts);
}
