# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 15:07:01 by lmunoz-q          #+#    #+#              #
#    Updated: 2017/11/12 16:57:24 by lmunoz-q         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCFILES = ft_putstr.c \
		   ft_putendl.c \
		   ft_strlen.c \
		   main.c \

INC = includes \

SRC = src \

OBJ = $(SRCFILES:%.c=$(OBJDIR)/%.o)

INCDIRS = $(addprefix -I,$(INC))

SRCDIRS = $(addprefix src/,$(SRCFILES))

vpath %.c src $(SRCDIRS)

OBJDIR = obj

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

$(OBJDIR)/%.o : %.c | $(OBJDIR)
	$(CC) $(INCDIRS) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
