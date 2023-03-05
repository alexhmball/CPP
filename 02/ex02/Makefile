NAME = fixed

SCRS = main.cpp Fixed.cpp

all: $(NAME)

$(NAME): $(SCRS)
	c++ -g -Wall -Wextra -Werror -std=c++98 $(SCRS) -o $(NAME)

clean:
	rm -fr $(NAME)

fclean: clean

re: fclean all

.PHONY: re all fclean clean