NAME = Identify

SRCS = Base.cpp main.cpp Identify.cpp

OBJS = $(SRCS:.cpp=.o)

INC = A.hpp Base.hpp B.hpp C.hpp Identify.hpp

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -fr

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re