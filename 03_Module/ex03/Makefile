# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 02:21:46 by ddantas-          #+#    #+#              #
#    Updated: 2023/09/02 13:30:10 by ddantas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = diamondtrap
RM = rm
FILESC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS = $(FILESC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	c++ $(CFLAGS) -c -o $@ $<

clean:
	$(RM) -f $(OBJS)
	
fclean: clean
	$(RM) -f $(NAME)

re: fclean all


.PHONY: all clean fclean re