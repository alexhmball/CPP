NAME = Serializer

SRCS =  Serializer.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

INC = Serializer.hpp Data.hpp

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -fr

all: $(NAME)

%.o: %.cpp $(INC)
	$(CC) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re