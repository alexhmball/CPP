NAME = Identify

SRCS =  A.cpp Base.cpp B.cpp C.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

INC = A.hpp Base.hpp B.hpp C.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -fr

all: $(NAME)

%.o: %.cpp $(INC)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re