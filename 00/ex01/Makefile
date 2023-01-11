NAME = PhoneBook

SRCS = main.cpp Contact.cpp PhoneBook.cpp

all: $(NAME)

$(NAME): $(SRCS)
	c++ -Wall -Wextra -Werror -std=c++98 $(SRCS) -o $(NAME)

clean:
	rm -fr $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
