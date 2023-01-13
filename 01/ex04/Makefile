NAME = replace

SRCS = main.cpp Replacement.cpp

all: $(NAME)

$(NAME): $(SRCS)
	c++ -Wall -Wextra -Werror -std=c++98 $(SRCS) -o $(NAME)

clean:
	rm -fr $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
