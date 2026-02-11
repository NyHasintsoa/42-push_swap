/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:46:45 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/11 18:05:05 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <unistd.h>
# include <stdlib.h>

int		ft_isspace(char c);
int		ft_issign(char c);
int		ft_strisnumeric(const char *str);
int		ft_has_dup(int *tab, int size);
int		ft_words_is_in_range(char **words);

void	ft_error(void);
void	ft_exit(void);

#endif
