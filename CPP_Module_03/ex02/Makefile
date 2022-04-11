NAME = cpp03_01
CPP_FILE = main.cpp ClapTrap.cpp ScavTrap.cpp 
CFLAGS = -Wall -Wextra -Werror
INC_FILE = ClapTrap.hpp ScavTrap.hpp 

all: $(NAME)

$(NAME): $(CPP_FILE)
	clang++ $(CFLAGS) -o $(NAME) $(CPP_FILE)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re