# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nramalan <nramalan@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 17:51:35 by nramalan          #+#    #+#              #
#    Updated: 2026/02/10 22:58:05 by nramalan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS := ft_isdigit.c ft_atol.c \
		ft_putchar.c ft_putstr.c \
		ft_split.c ft_strcmp.c

NAME := libft.a

HEADER_DIR := ../include

OBJS := $(SRCS:.c=.o)
CFLAGS := -Wall -Wextra -Werror
CC := @cc
AR := @ar crs
RM := @rm -f

.PHONY: all
all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -I $(HEADER_DIR) -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

.PHONY: clean
clean:
	$(RM) $(OBJS)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all