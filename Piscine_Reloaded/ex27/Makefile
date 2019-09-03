# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ifran <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 03:15:40 by ifran             #+#    #+#              #
#    Updated: 2019/07/18 20:02:53 by ifran            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADERS = ./includes/*.h
SRCS = ./srcs/*.c
NAME = ft_display_file
OBJECTS = *.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc -I $(HEADERS) $(FLAGS) -c $(SRCS)
	@gcc -o $(NAME) $(OBJECTS)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
