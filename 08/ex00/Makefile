NAME = easyfind

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

INC = easyfind.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -fr

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re