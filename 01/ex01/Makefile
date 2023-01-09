NAME = MoarBrainz

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

all: $(NAME)

$(NAME): $(SRCS)
	g++ -Wall -Wextra -Werror -std=c++98 ${SRCS} -o ${NAME}

clean:
	rm -fr $(NAME)

fclean: clean

re: fclean all

.PHONY: re all clean fclean
