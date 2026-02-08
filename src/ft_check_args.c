/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 19:15:54 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/08 20:25:59 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int  ft_arg_is_numeric(char **argv)
{
    (void) argv;
    return (1);
}

void	ft_check_args(int argc, char *argv[])
{
    unsigned int i;

    printf("argc = '%d'\n", argc);
    i = 0;
    printf("argument parameters :\n");
    while (argv[i])
    {
        printf("argv[%d] = '%s'\n", i, argv[i]);
        i++;
    }
}