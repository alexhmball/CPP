NAME = converter

SRCS = ScalarConverter.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

INC = ScalarConverter.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -fr

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re