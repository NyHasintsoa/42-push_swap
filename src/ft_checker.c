/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 19:35:11 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/10 20:15:31 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_utils.h"

static int	ft_tab_length(int *tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	*ft_checker(int argc, char *argv[])
{
	int				*tab;
	unsigned int	length;

	tab = NULL;
	if ((argc - 1) == 0)
		ft_error();
	if ((argc - 1) > 1)
		tab = ft_check_args(argc, argv);
	else
		tab = ft_check_str(argv[1]);
	length = ft_tab_length(tab);
	if (ft_has_dup(tab, length))
	{
		free(tab);
		ft_error();
	}
	return (tab);
}
