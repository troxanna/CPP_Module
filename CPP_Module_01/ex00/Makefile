NAME = BraiiiiiiinnnzzzZ
CPP_FILE = main.cpp Zombie.cpp
INC_FILE = Zombie.hpp
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(CPP_FILE)
	clang++ $(CFLAGS) -o $(NAME) $(CPP_FILE)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re