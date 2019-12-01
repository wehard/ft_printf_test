# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 15:22:37 by wkorande          #+#    #+#              #
#    Updated: 2019/12/01 17:12:36 by wkorande         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf_test

SRCS = ft_printf_test.c

INCL = ./

LIBFOLDER = ../ft_printf

LIBINCL	= include

all: $(NAME)

$(NAME):
	make -C $(LIBFOLDER)
	make clean -C $(LIBFOLDER)
	gcc -o $(NAME) -I $(INCL) -I $(LIBFOLDER)/$(LIBINCL) $(SRCS) -L$(LIBFOLDER) -lftprintf

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re