NAME = Sed_is_for_losers
CPP_FILE = main.cpp 
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