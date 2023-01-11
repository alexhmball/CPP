NAME = Megaphone

SCRS = megaphone.cpp

all: $(NAME)

$(NAME): $(SRCS)
	g++ -Wall -Wextra -Werror -std=c++98 $(SCRS) -o $(NAME)

clean:
	rm -fr $(NAME)
	
fclean: clean


re: fclean all

.PHONY: re fclean clean all
