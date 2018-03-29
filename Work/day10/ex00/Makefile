# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bngweny <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 13:35:22 by bngweny           #+#    #+#              #
#    Updated: 2018/03/27 15:51:45 by bngweny          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
DIR = ./includes/

PATH_S = ./srcs/
SRCS = $(PATH_S)ft_putchar.c $(PATH_S)ft_putstr.c $(PATH_S)ft_strcmp.c $(PATH_S)ft_strlen.c $(PATH_S)ft_swap.c

OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all	:
			gcc -Wall -Wextra -Werror -c -I$(DIR) -c $(SRCS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)
			rm -f $(OBJS)

clean	:
			rm -f $(OBJS)

fclean	:	clean	
			rm -f $(NAME)
re		:	fclean all
