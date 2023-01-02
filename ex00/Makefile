NAME = Megaphone

SCRS = megaphone.cpp

all: $(NAME)

$(NAME): $(SRCS)
	g++ -Wall -Wextra -Werror -std=c++98 $(SCRS) -o $(NAME)

clean:

fclean: clean
	rm -fr $(NAME)

re: fclean all

.PHONY: re fclean clean all
