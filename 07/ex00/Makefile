NAME = templates

SRCS = Test.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

INC = swap.hpp min.hpp max.hpp Test.hpp

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -fr

all: $(NAME)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re