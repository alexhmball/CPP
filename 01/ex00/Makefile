NAME = Brainz

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

all: $(NAME)

$(NAME): ${SRCS}
	c++ -Wall -Wextra -Werror -std=c++98 ${SRCS} -o ${NAME}

clean:
	rm -fr $(NAME)

fclean: clean

re: fclean all

.PHONY: re all clean fclean
