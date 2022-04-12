NAME = ex03
CPP_FILE = main.cpp ClapTrap.cpp ScavTrap.cpp DiamondTrap.cpp FragTrap.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow
INC_FILE = ClapTrap.hpp ScavTrap.hpp DiamondTrap.hpp FragTrap.hpp

all: $(NAME)

$(NAME): $(CPP_FILE)
	clang++ $(CFLAGS) -o $(NAME) $(CPP_FILE)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re