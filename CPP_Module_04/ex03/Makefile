NAME = ex03
CPP_FILE = *.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC_FILE = *.hpp

all: $(NAME)

$(NAME): $(CPP_FILE)
	c++ $(CFLAGS) -o $(NAME) $(CPP_FILE)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re