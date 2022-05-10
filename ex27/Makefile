# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glychest <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/04 14:50:51 by glychest          #+#    #+#              #
#    Updated: 2019/09/04 17:00:28 by glychest         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS = srcs/main.c

all:
	gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME)

clean:
		/bin/rm -f *.o

fclean:
		/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
