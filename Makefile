# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 17:46:53 by nramalan          #+#    #+#              #
#    Updated: 2026/02/10 19:17:43 by nramalan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS := main.c ft_check_args.c ft_get_strategy.c ft_check_str.c \
		push_swap.c

SRCS_UTILS := ft_issign.c ft_isspace.c ft_strisnumeric.c ft_error.c \
		ft_check_dup.c ft_check_range.c

NAME := push_swap

SRC_DIR := src/
UTILS_DIR := utils/

OBJS := $(addprefix $(SRC_DIR), $(SRCS:.c=.o)) \
		$(addprefix $(UTILS_DIR), $(SRCS_UTILS:.c=.o))

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
	$(CC) $(CFLAGS) -I . -c $< -o ${<:.c=.o}

$(NAME): $(LIBFT) $(OBJS)
	@$(call BLUE,"Compiling Push Swap ...")
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
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