#include "Bureaucrat.hpp"

int main()
{
    try
	{
		Bureaucrat a("Anton", 1);
		Bureaucrat e("Egor", 150);
		Bureaucrat b("Bro", -1000);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
    return 0;
}