# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 14:15:15 by eviscont          #+#    #+#              #
#    Updated: 2024/11/27 14:15:55 by eviscont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

CFLAGS = -Wall -Wextra -Werror
SRCS = main.cpp Span.cpp
HDRS = Span.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HDRS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re