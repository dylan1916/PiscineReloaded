# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etordjma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 13:57:02 by etordjma          #+#    #+#              #
#    Updated: 2018/11/07 15:05:05 by etordjma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_display_file.c
FLAGS = -Wall -Wextra -Werror
FILES = ft_display_file.o

all :	$(NAME)

$(NAME) :	
			gcc -c $(FLAGS) $(SRC)
			gcc -o $(NAME) $(FILES)

clean :
			/bin/rm -f $(FILES)

fclean : clean
			/bin/rm -f $(NAME)
