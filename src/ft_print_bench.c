/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bench.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 07:30:25 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/26 09:27:28 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_utils.h"
#include "libft.h"

static void	ft_print_bench_rotation_parts(t_options opts)
{
	ft_putstr("\n[bench] ra:  ");
	ft_putnbr(opts.bench->ra);
	ft_putstr("  rb:  ");
	ft_putnbr(opts.bench->rb);
	ft_putstr("  rr:  ");
	ft_putnbr(opts.bench->rr);
	ft_putstr("  rra: ");
	ft_putnbr(opts.bench->rra);
	ft_putstr("  rrb: ");
	ft_putnbr(opts.bench->rrb);
	ft_putstr("  rrr: ");
	ft_putnbr(opts.bench->rrr);
	ft_putstr("\n");
}

static void	ft_print_strategy(t_strategy strategy)
{
	if (strategy == STRATEGY_ADAPTIVE)
		ft_putstr("Adaptive");
	else if (strategy == STRATEGY_SIMPLE)
		ft_putstr("Simple");
	else if (strategy == STRATEGY_MEDIUM)
		ft_putstr("Medium");
	else if (strategy == STRATEGY_COMPLEX)
		ft_putstr("Complex");
}

static void	ft_print_class(t_options opts)
{
	if (opts.strategy == STRATEGY_ADAPTIVE)
	{
		if (opts.bench->disorder < 0.2)
			ft_putstr("O(n²)");
		else if (opts.bench->disorder >= 0.2 && opts.bench->disorder < 0.5)
			ft_putstr("O(n√n)");
		else if (opts.bench->disorder >= 0.5)
			ft_putstr("O(nlogn)");
		return ;
	}
	if (opts.strategy == STRATEGY_SIMPLE)
		ft_putstr("O(n²)");
	else if (opts.strategy == STRATEGY_MEDIUM)
		ft_putstr("O(n√n)");
	else if (opts.strategy == STRATEGY_COMPLEX)
		ft_putstr("O(nlogn)");
}

static int	ft_total_ops(t_bench	*bench)
{
	int	total;

	total = bench->ra + bench->rb + bench->rr;
	total += bench->rra + bench->rrb + bench->rrr;
	total += bench->sa + bench->sb + bench->ss;
	total += bench->pa + bench->pb;
	return (total);
}

void	ft_print_bench(t_options opts)
{
	char	*disorder;

	disorder = ft_format_disorder(opts.bench->disorder);
	ft_putstr("[bench] disorder:   ");
	ft_putstr(disorder);
	free(disorder);
	ft_putstr("\n[bench] strategy:   ");
	ft_print_strategy(opts.strategy);
	ft_putstr(" / ");
	ft_print_class(opts);
	ft_putstr("\n[bench] total_ops:  ");
	ft_putnbr(ft_total_ops(opts.bench));
	ft_putstr("\n[bench] sa:  ");
	ft_putnbr(opts.bench->sa);
	ft_putstr("  sb:  ");
	ft_putnbr(opts.bench->sb);
	ft_putstr("  ss:  ");
	ft_putnbr(opts.bench->ss);
	ft_putstr("  pa:  ");
	ft_putnbr(opts.bench->pa);
	ft_putstr("  pb:  ");
	ft_putnbr(opts.bench->pb);
	ft_print_bench_rotation_parts(opts);
}
