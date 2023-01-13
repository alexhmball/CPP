NAME = hithisisbrain

SRCS = main.cpp

all: $(NAME)

$(NAME): ${SRCS}
	c++ -Wall -Wextra -Werror -std=c++98 ${SRCS} -o ${NAME}

clean:
	rm -fr $(NAME)

fclean: clean

re: fclean all

.PHONY: re all clean fclean
