/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 08:58:15 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/26 09:38:54 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

void	ft_putnbr(int n)
{
	long	nbr;

	nbr = (long) n;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= (-1);
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar("0123456789"[nbr % 10]);
}
