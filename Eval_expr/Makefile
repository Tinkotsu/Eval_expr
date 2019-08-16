# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ifran <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 03:15:40 by ifran             #+#    #+#              #
#    Updated: 2019/07/21 20:53:47 by ifran            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADERS = ./srcs/*.h
SRCS = ./srcs/*.c
NAME = eval_expr 
OBJECTS = *.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -I $(HEADERS) -c $(SRCS)
	@gcc -o $(NAME) $(OBJECTS)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
