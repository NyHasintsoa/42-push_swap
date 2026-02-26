/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:10:04 by nramalan          #+#    #+#             */
/*   Updated: 2026/02/26 08:33:49 by nramalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "ft_type.h"

void		push_swap(t_options opts);

int			ft_check_array_sorted(int *numbers, int size);
int			ft_check_stack_sorted(t_stack *stack, int size);
int			*ft_check_args(int argc, char *argv[]);
int			*ft_check_str(char *argv);

t_options	ft_parse_options(int argc, char *argv[]);
t_strategy	ft_parse_strategy(const char *str);

t_stack		*ft_stack_top(t_stack **stack);
void		ft_stackadd_back(t_stack **stacks, t_stack *node);

void		ft_stack_push(t_stack **stack, t_stack *node);
void		ft_stack_swap(t_stack **stack);
void		ft_stack_rotate(t_stack **stack);
void		ft_stack_reverse_rotate(t_stack **stack);

int			ft_stack_size(t_stack *stack);
void		ft_stack_free(t_stack **stack);
t_stack		*ft_stack_init(int *numbers, int count);

t_bench		ft_init_bench(float disorder);
void		ft_print_bench(t_options opts);

void		ft_sa(t_stack **stack_a, t_options opts);
void		ft_sb(t_stack **stack_b, t_options opts);
void		ft_ss(t_stack **stack_a, t_stack **stack_b, t_options opts);
void		ft_pa(t_stack **stack_a, t_stack **stack_b, t_options opts);
void		ft_pb(t_stack **stack_a, t_stack **stack_b, t_options opts);
void		ft_ra(t_stack **stack_a, t_options opts);
void		ft_rb(t_stack **stack_b, t_options opts);
void		ft_rr(t_stack **stack_a, t_stack **stack_b, t_options opts);
void		ft_rra(t_stack **stack_a, t_options opts);
void		ft_rrb(t_stack **stack_b, t_options opts);
void		ft_rrr(t_stack **stack_a, t_stack **stack_b, t_options opts);

int			ft_get_min_pos(t_stack *stack);
int			ft_get_max_pos(t_stack *stack);
void		ft_sort_three(t_stack **stack, t_options opts);
void		ft_sort_min(t_stack **stack_a, t_stack **stack_b, t_options opts);

void		ft_strategy_simple(
				t_options opts,
				t_stack **stack_a,
				t_stack **stack_b);
void		ft_strategy_medium(
				t_options opts,
				t_stack **stack_a,
				t_stack **stack_b);
void		ft_strategy_complex(
				t_options opts,
				t_stack **stack_a,
				t_stack **stack_b);
void		ft_strategy_adaptive(
				t_options opts,
				t_stack **stack_a,
				t_stack **stack_b,
				float disorder);

#endif
