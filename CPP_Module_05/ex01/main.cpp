#include "Bureaucrat.hpp"

int main()
{
    try
	{
		Bureaucrat bibo("BIBO", 1);
		Bureaucrat biba("BIBA", 150);
		//Bureaucrat bibe("BIBE", 1000);
		Bureaucrat bibu("BIBU", -1000);
	}
	catch (std::exception & e)
	{
		std::cout << "LOX" << std::endl;
		std::cout << e.what() << std::endl;
	}
    return 0;
}