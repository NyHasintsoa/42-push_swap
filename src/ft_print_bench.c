/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bench.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 07:30:25 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/26 08:36:29 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

char	*ft_format_disorder(float disorder)
{
	char	*str;
	int		first;
	int		last;

	str = (char *) malloc(sizeof(char) * 7);
	if (!str)
		return (NULL);
	first = (int) disorder;
	last = (int)((disorder - first) * 100);
	str[0] = (first / 10) + '0';
	str[1] = (first % 10) + '0';
	str[2] = '.';
	str[3] = (last / 10) + '0';
	str[4] = (last % 10) + '0';
	str[5] = '%';
	str[6] = '\0';
	return (str);
}

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

void	ft_print_bench(t_options opts)
{
	char	*disorder;

	disorder = ft_format_disorder(opts.bench->disorder);
	ft_putstr("[bench] disorder:   ");
	ft_putstr(disorder);
	free(disorder);
	ft_putstr("\n[bench] strategy:   ");
	ft_putnbr(opts.strategy);
	ft_putstr(" / ");
	ft_putnbr(opts.strategy);
	ft_putstr("\n[bench] total_ops:  50\n");
	ft_putstr("[bench] sa:  ");
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
