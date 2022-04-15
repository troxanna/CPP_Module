#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <limits.h>

void	convertToInt(double arg)
{
	std::cout << "int: ";
	if (isnan(arg) || isinf(arg) || arg < INT_MIN || arg > __INT_MAX__)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(arg) << std::endl;
}

void	convertToDouble(double arg)
{
	std::cout << "double: ";
	if (isnan(arg) || isinf(arg) || arg == std::numeric_limits<double>::infinity() || arg == -std::numeric_limits<double>::infinity())
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(arg) << std::endl;
}

void	convertToFloat(double arg)
{
	std::cout << "float: ";
	if (isnan(arg) || isinf(arg) || arg == std::numeric_limits<float>::infinity() || arg == -std::numeric_limits<float>::infinity())
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(arg) << "f" << std::endl;
}

void	convertToChar(double arg)
{
	std::cout << "char: ";
	if (isprint(arg))
	{
		char a = static_cast<char>(arg);
		std::cout << "'" << a << "'" << std::endl;
	}
	else if (arg < 0 || arg > UCHAR_MAX || isnan(arg) || isinf(arg))
	{
		std::cout << "impossible" << std::endl;
	}
	else
		std::cout << "Non displayable" << std::endl;
}


int	main( int argc, char **argv )
{
	double result;
	char *str = NULL;

	if (argc != 2)
	{
		std::cout << "Error. Invalid count of arguments" << std::endl;
		return (1);
	}
	result = std::strtod(argv[1], &str);
	if (*str)
	{
		std::cout << "You have junk after numbers" << std::endl;
		return (1);
	}
	convertToChar(result);
	convertToInt(result);
	convertToFloat(result);
	convertToDouble(result);
	return (0);
}