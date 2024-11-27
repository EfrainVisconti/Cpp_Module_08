# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 11:22:47 by eviscont          #+#    #+#              #
#    Updated: 2024/11/27 12:27:19 by eviscont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

CFLAGS = -Wall -Wextra -Werror
SRCS = main.cpp
HDRS = easyfind.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HDRS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re