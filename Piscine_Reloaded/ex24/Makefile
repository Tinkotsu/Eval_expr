# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ifran <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/03 19:34:13 by ifran             #+#    #+#              #
#    Updated: 2019/09/03 19:34:18 by ifran            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ./srcs
HEADERS_FOLDER = ./includes

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror \
	-I $(HEADERS_FOLDER) \
	-c $(SRCS)/ft_putstr.c \
	-c $(SRCS)/ft_swap.c \
	-c $(SRCS)/ft_strlen.c \
	-c $(SRCS)/ft_strcmp.c \
	-c $(SRCS)/ft_putchar.c

	@ar rc $(NAME) ./ft_putchar.o \
				  ./ft_putstr.o \
				  ./ft_strcmp.o \
				  ./ft_swap.o \
				  ./ft_strlen.o
	@ranlib $(NAME)

clean:
	@/bin/rm -f *.o

fclean:
	@/bin/rm -f *.o
	@/bin/rm -f $(NAME)
	
re: fclean all
