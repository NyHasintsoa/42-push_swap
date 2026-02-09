/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 21:00:02 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/09 22:41:21 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int  ft_words_are_numeric(char *words[])
{
    int i;

    i = 1;
    while (words[i])
    {
        if (!ft_strisnumeric(words[i]))
            return (0);
        i++;
    }
    return (1);
}

static int  ft_words_is_in_range(char **words)
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

static char	**ft_free_all(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (NULL);
}

static int ft_words_length(char **words)
{
    int i;

    i = 0;
    while (words[i])
        i++;
    return (i);
}

int	*ft_check_str(char *argv)
{
    unsigned int i;
    char **words;
    int *tab;
    int len;

    words = ft_split(argv, ' ');
    if (!words)
        return (NULL);
    len = ft_words_length(words);
    if (!ft_words_are_numeric(words)
        || !ft_words_is_in_range(words))
    {
        ft_free_all(words, len - 1);
        ft_error();
    }
    tab = (int *) malloc(sizeof(int) * (len + 1));
    if (!tab)
    {
        ft_free_all(words, len - 1);
        return (NULL);
    }
    i = 0;
    while (words[i])
    {
        tab[i] = (int) ft_atol(words[i]);
        i++;
    }
    tab[i] = 0;
    ft_free_all(words, len - 1);
    return (tab);
}