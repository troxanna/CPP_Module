NAME = ex01
CPP_FILE = main.cpp Span.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC_FILE = span.hpp

all: $(NAME)

$(NAME): $(CPP_FILE)
	c++ $(CFLAGS) -o $(NAME) $(CPP_FILE)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re