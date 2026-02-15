/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:10:04 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/15 19:28:24 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "ft_type.h"

void		push_swap(t_options options, t_stack *stack_a, t_stack *stack_b);

int			*ft_check_args(int argc, char *argv[]);
int			*ft_check_str(char *argv);

t_options	ft_parse_options(int argc, char *argv[]);
t_strategy	ft_parse_strategy(const char *str);

t_stack		*ft_stack_new(int value, int index);
t_stack		*ft_stack_top(t_stack **stack);
void		ft_stackadd_back(t_stack **stacks, t_stack *node);

void		ft_stack_push(t_stack **stack, t_stack *node);
void		ft_stack_swap(t_stack **stack);
void		ft_stack_rotate(t_stack **stack);
void		ft_stack_reverse_rotate(t_stack **stack);

int			ft_stack_size(t_stack *stack);
void		ft_stack_free(t_stack **stack);
t_stack		*ft_stack_init(int *numbers, int count);

void	ft_sa(t_stack **stack_a);
void	ft_sb(t_stack **stack_b);
void	ft_ss(t_stack **stack_a, t_stack **stack_b);
void	ft_pa(t_stack **stack_a, t_stack **stack_b);
void	ft_pb(t_stack **stack_a, t_stack **stack_b);
void	ft_ra(t_stack **stack_a);
void	ft_rb(t_stack **stack_b);
void	ft_rr(t_stack **stack_a, t_stack **stack_b);
void	ft_rra(t_stack **stack_a);
void	ft_rrb(t_stack **stack_b);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b);

void		ft_strategy_simple(t_stack **stack_a, t_stack **stack_b);

#endif
