# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/23 18:05:21 by jzuazo            #+#    #+#              #
#    Updated: 2026/09/26 10:24:23 by jzuazo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCDIR = srcs
INCDIR = includes

SRC = $(SRCDIR)/ft_putchar.c \
	$(SRCDIR)/ft_putstr.c \
	$(SRCDIR)/ft_strcmp.c \
	$(SRCDIR)/ft_strlen.c \
	$(SRCDIR)/ft_swap.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I$(INCDIR)
AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(SRCDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
