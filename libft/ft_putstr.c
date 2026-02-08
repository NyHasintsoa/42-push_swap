/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:18:07 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/08 19:02:45 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
    unsigned int i;

    i = 0;
    if (!str)
        return ;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}