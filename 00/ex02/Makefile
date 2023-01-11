NAME = account

SRC = Account.cpp tests.cpp

all: $(NAME)

$(NAME): $(SRC)
	g++ -g -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re