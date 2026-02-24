# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 17:46:53 by nramalan          #+#    #+#              #
#    Updated: 2026/02/24 19:44:46 by nramalan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS := main.c push_swap.c ft_check_args.c ft_check_str.c ft_check_sort.c \
		ft_parse_options.c ft_parse_strategy.c ft_stack.c ft_stack_operations.c \
		ft_push_operations.c ft_reverse_operations.c \
		ft_rotate_operations.c ft_swap_operations.c \
		ft_sort_helper.c ft_strategy_simple.c \
		ft_strategy_medium.c ft_strategy_complex.c \
		ft_strategy_adaptive.c \

SRCS_UTILS := ft_issign.c ft_isspace.c ft_strisnumeric.c ft_error.c \
		ft_check_dup.c ft_check_range.c ft_disorder.c ft_sqrt.c ft_helpers.c \

SRCS_TESTS := ft_print_stack.c ft_print_options.c

NAME := push_swap

SRC_DIR := src/
UTILS_DIR := utils/
TESTS_DIR := tests/
HEADER_DIR := include

OBJS := $(addprefix $(SRC_DIR), $(SRCS:.c=.o)) \
		$(addprefix $(UTILS_DIR), $(SRCS_UTILS:.c=.o)) \
		$(addprefix $(TESTS_DIR), $(SRCS_TESTS:.c=.o)) \

LIBFT := libft/libft.a
CFLAGS := -Wall -Wextra -Werror
CC := @cc
RM := @rm -f

GREEN = /bin/echo -e "\x1b[32m $1 \x1b[0m"
RED = /bin/echo -e "\x1b[31m $1 \x1b[0m"
BLUE = /bin/echo -e "\033[0;94m $1 \x1b[0m"

.PHONY: all
all: $(NAME)

.PHONY: obs
obs:
	@echo $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -I$(HEADER_DIR) -c $< -o ${<:.c=.o}

$(NAME): $(LIBFT) $(OBJS)
	@$(call BLUE,"Compiling Push Swap ...")
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -lm -o $(NAME)
	@$(call GREEN,"Push Swap compiled successfully")

$(LIBFT):
	@$(call BLUE,"Compiling Libft ...")
	@$(MAKE) --silent -C libft

.PHONY: clean
clean:
	$(RM) $(OBJS)
	@$(MAKE) --silent -C libft clean

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)
	@$(MAKE) --silent -C libft fclean

.PHONY: re
re: fclean all
	@$(MAKE) --silent -C libft re