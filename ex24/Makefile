# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 15:06:49 by lmunoz-q          #+#    #+#              #
#    Updated: 2017/11/10 19:54:47 by lmunoz-q         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCFILES = ft_putchar.c \
		   ft_putstr.c \
		   ft_strcmp.c \
		   ft_swap.c \
		   ft_strlen.c \

INC = includes \

DIR = srcs \

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCDIRS = $(addprefix -I,$(INC))

SRCS := $(addprefix srcs/,$(SRCFILES))

OBJ = $(addprefix srcs/, $(SRCFILES:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

srcs/%.o: srcs/%.c
	$(CC) -c $(INCDIRS) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
