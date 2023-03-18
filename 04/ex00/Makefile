NAME = Animal

SRCS = Cat.cpp Dog.cpp main.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp

INC = Cat.hpp Dog.hpp Animal.hpp WrongAnimal.hpp WrongCat.hpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re