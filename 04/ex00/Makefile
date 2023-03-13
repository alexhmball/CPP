NAME = Animal

SRCS = Cat.cpp Dog.cpp main.cpp Animal.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wno-shadow -Wshadow -Wall -Wextra -Werror -std=c++98

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re