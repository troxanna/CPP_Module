#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
	const Bureaucrat *b = new Bureaucrat("Anton", 120);
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	try
	{
		rrf->execute(*b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	b->signForm(rrf);
	try
	{
		rrf->execute(*b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
    return 0;
}