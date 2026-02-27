# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 17:46:53 by nramalan          #+#    #+#              #
#    Updated: 2026/02/27 17:38:23 by nramalan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS := main.c push_swap.c ft_disorder.c \
		ft_strcmp.c ft_parse_options.c ft_parse_strategy.c \
		ft_push_operations.c ft_reverse_operations.c ft_rotate_operations.c \
		ft_swap_operations.c ft_sort_helper.c ft_strategy_simple.c \
		ft_strategy_medium.c ft_strategy_complex.c ft_strategy_adaptive.c \
		ft_bench.c ft_print_bench.c

SRCS_UTILS := ft_check_args.c ft_check_str.c ft_issign.c ft_isspace.c ft_strisnumeric.c \
		ft_error.c ft_check_dup.c ft_check_range.c ft_check_sort.c ft_count.c \
		ft_stack.c ft_stack_operations.c ft_stack_utils.c ft_atol.c \

SRCS_BONUS := main_bonus.c checker_bonus.c ft_parse_args_bonus.c \
		ft_push_operations_bonus.c ft_reverse_operations_bonus.c \
		ft_rotate_operations_bonus.c ft_swap_operations_bonus.c \
		ft_test.c

NAME := push_swap
BONUS_NAME := checker

SRC_DIR := src/
UTILS_DIR := utils/
BONUS_DIR := bonus/
HEADER_DIR := include

OBJS := $(addprefix $(SRC_DIR), $(SRCS:.c=.o)) \
		$(addprefix $(UTILS_DIR), $(SRCS_UTILS:.c=.o)) \

OBJS_BONUS := $(addprefix $(BONUS_DIR), $(SRCS_BONUS:.c=.o)) \
			$(addprefix $(UTILS_DIR), $(SRCS_UTILS:.c=.o)) \

LIBFT := libft/libft.a
CFLAGS := -Wall -Wextra -Werror
CC := @cc
RM := @rm -f

GREEN = /bin/echo -e "\x1b[32m $1 \x1b[0m"
RED = /bin/echo -e "\x1b[31m $1 \x1b[0m"
BLUE = /bin/echo -e "\033[0;94m $1 \x1b[0m"

.PHONY: all
all: $(LIBFT) $(NAME)

.PHONY: bonus
bonus: $(LIBFT) $(BONUS_NAME)

.c.o:
	$(CC) $(CFLAGS) -I$(HEADER_DIR) -c $< -o ${<:.c=.o}

$(NAME): $(LIBFT) $(OBJS)
	@$(call BLUE,"Compiling Push Swap ...")
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -lm -o $(NAME)
	@$(call GREEN,"Push Swap compiled successfully")

$(BONUS_NAME): $(LIBFT) $(OBJS_BONUS)
	@$(call BLUE,"Compiling Push Swap Checker ...")
	$(CC) $(CFLAGS) $(OBJS_BONUS) $(LIBFT) -lm -o $(BONUS_NAME)
	@$(call GREEN,"Checker Push Swap compiled successfully")

$(LIBFT):
	@$(call BLUE,"Compiling Libft ...")
	@$(MAKE) --silent -C libft

.PHONY: clean
clean:
	$(RM) $(OBJS) $(OBJS_BONUS)
	@$(MAKE) --silent -C libft clean

.PHONY: fclean
fclean: clean
	$(RM) $(NAME) $(BONUS_NAME)
	@$(MAKE) --silent -C libft fclean

.PHONY: re
re: fclean all
	@$(MAKE) --silent -C libft re