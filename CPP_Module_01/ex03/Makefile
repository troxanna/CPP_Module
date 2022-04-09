NAME = UnnecessaryViolence
CPP_FILE = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC_FILE = Weapon.hpp

all: $(NAME)

$(NAME): $(CPP_FILE)
	clang++ $(CFLAGS) -o $(NAME) $(CPP_FILE)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re