#include <iostream>
#include <cctype>

static void	upper_case(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		std::cout << (char)toupper(s[i]);

}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (++i < argc)
			upper_case(argv[i]);
	std::cout << std::endl;

	return (0);
}