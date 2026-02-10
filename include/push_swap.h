/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:10:04 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/10 23:59:03 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "ft_type.h"

int		ft_isdigit(int c);
long	ft_atol(const char *nptr);

int		*ft_check_args(int argc, char *argv[]);
int		*ft_check_str(char *argv);

t_options	ft_parse_options(int argc, char *argv[]);
t_strategy	ft_parse_strategy(const char *str);

#endif
