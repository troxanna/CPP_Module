NAME = MoarBrainz!
CPP_FILE = main.cpp ZombieHorde.cpp Zombie.cpp
INC_FILE = Zombie.hpp
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(CPP_FILE)
	clang++ $(CFLAGS) -o $(NAME) $(CPP_FILE)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re