/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_range.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 19:15:36 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/10 19:30:59 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "libft.h"

int  ft_words_is_in_range(char **words)
{
    long n;
    int i;

    i = 1;
    while (words[i])
    {
        n = ft_atol(words[i]);
        if ((n > 2147483647) || (n < -2147483648))
            return (0);
        i++;
    }
    return (1);
}