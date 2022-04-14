NAME = ex01
CPP_FILE = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC_FILE = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

all: $(NAME)

$(NAME): $(CPP_FILE)
	clang++ $(CFLAGS) -o $(NAME) $(CPP_FILE)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re