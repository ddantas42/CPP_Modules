# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 02:08:29 by hiper             #+#    #+#              #
#    Updated: 2023/09/08 18:58:00 by ddantas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = how_cute_v2
RM = rm
FILESC = main.cpp Fixed.cpp

OBJS = $(FILESC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	c++ $(CFLAGS) -c -o $@ $<

clean:
	$(RM) -f $(OBJS)
	
fclean: clean
	$(RM) -f $(NAME)

re: fclean all


.PHONY: all clean fclean re