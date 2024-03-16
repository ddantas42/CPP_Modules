# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hiper <hiper@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 02:21:46 by ddantas-          #+#    #+#              #
#    Updated: 2024/03/16 16:07:50 by hiper            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = intern
RM = rm
FORMS = ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
SRC = main.cpp Bureaucrat.cpp AForm.cpp

FILESC = $(SRC) $(FORMS)

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