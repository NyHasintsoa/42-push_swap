/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:56:57 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/11 18:09:59 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int		ft_strcmp(const char *s1, const char *s2);

int		ft_isdigit(int c);
long	ft_atol(const char *nptr);

char	**ft_split(char const *s, char c);

#endif
