/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:59:46 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/09 22:39:09 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
    (void) argc;
    unsigned int i;
    int *tab;

    i = 0;
    tab = ft_check_str(argv[1]);
    while (tab[i])
    {
        printf("tab[%d] = '%d'\n", i, tab[i]);
        i++;
    }
    if (!ft_has_dup(tab, i))
        printf("No duplication !");
    else
        printf("Error duplication !");
    free(tab);
    return (0);
}