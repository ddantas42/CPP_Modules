CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
NAME = btc
RM = rm
FILESC = main.cpp BitcoinExchange.cpp

OBJS = $(FILESC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(FILESH)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	$(RM) -f $(OBJS)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all


.PHONY: all clean fclean re