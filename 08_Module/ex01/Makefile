# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hiper <hiper@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 02:21:46 by ddantas-          #+#    #+#              #
#    Updated: 2024/03/18 12:13:51 by hiper            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
NAME = span
RM = rm
FILESC = main.cpp Span.cpp

OBJS = $(FILESC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(FILESH)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -lm

%.o: %.cpp
	c++ $(CFLAGS) -c -o $@ $<

clean:
	$(RM) -f $(OBJS)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all


.PHONY: all clean fclean re