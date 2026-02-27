/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:46:45 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/27 13:31:55 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <unistd.h>
# include <stdlib.h>
# include "ft_type.h"

int		ft_strcmp(const char *s1, const char *s2);

long	ft_atol(const char *nptr);

int		ft_isspace(char c);
int		ft_issign(char c);
int		ft_strisnumeric(const char *str);
int		ft_has_dup(int *tab, int size);
int		ft_count_numbers(const char *s, char c);
int		ft_words_is_in_range(char **words);

void	ft_error(void);
void	ft_exit(void);

float	ft_compute_disorder(t_options opts);
char	*ft_format_disorder(float disorder);

#endif
