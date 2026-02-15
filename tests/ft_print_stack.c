/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:09:13 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/15 19:13:50 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_test.h"

void    ft_print_stack(t_stack *stack)
{
    t_stack *lst;
    int i;
    int size;

    lst = stack;
    size = ft_stack_size(stack);
    i = 0;
    while (i < size)
    {
        printf("tab[%d] = '%d'\n", i, lst->value);
        lst = lst->next;
        i++;
    }
}