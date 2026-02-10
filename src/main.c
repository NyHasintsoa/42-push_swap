/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:59:46 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/10 19:28:19 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_utils.h"

int	main(int argc, char *argv[])
{
    unsigned int i;
    int *tab;

    i = 0;
    tab = ft_check_args(argc, argv);
    while (tab[i])
    {
        printf("tab[%d] = '%d'\n", i, tab[i]);
        i++;
    }
    if (!ft_has_dup(tab, i))
        printf("No duplication !\n");
    else
        printf("Error duplication !\n");
    free(tab);
    return (0);
}