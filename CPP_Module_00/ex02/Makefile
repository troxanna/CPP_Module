NAME = account
CPP_FILE = tests.cpp Account.cpp
INC_FILE = Account.hpp
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