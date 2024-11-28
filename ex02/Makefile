# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/28 16:10:46 by eviscont          #+#    #+#              #
#    Updated: 2024/11/28 16:11:04 by eviscont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutantstack

CFLAGS = -Wall -Wextra -Werror
SRCS = main.cpp
HDRS = Span.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HDRS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re