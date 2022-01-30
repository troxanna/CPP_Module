NAME = fixed_02
CPP_FILE = main.cpp Fixed.cpp 
CFLAGS = -Wall -Wextra -Werror
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