#include "Intern.hpp"

static std::string fNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

Intern::Intern( void ) 
{
    // ptr[0] = &Intern::shrubberyCreation;
	// ptr[1] = &Intern::robotomyRequest;
	// ptr[2] = &Intern::presidentialPardon;
}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern& Intern::operator=(const Intern &other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

Intern::~Intern() {}

Form*   Intern::shrubberyCreation(std::string& target) {
	return new ShrubberyCreationForm(target);
}
Form*   Intern::robotomyRequest(std::string& target) {
	return new RobotomyRequestForm(target);
}
Form*   Intern::presidentialPardon(std::string& target) {
	return new PresidentialPardonForm(target);
}

Form*	Intern::makeForm(std::string fName, std::string target)
{
    Form*	tmp = nullptr;
    Form*(Intern::*ptr[3])(std::string &target) = {&Intern::shrubberyCreation, &Intern::robotomyRequest,
		&Intern::presidentialPardon};
    try
    {
        if (fName != fNames[0] && fName != fNames[1]
		&& fName != fNames[2])
		    throw Intern::InternException("Error message. Form not find\n");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < 3; i++)
	{
		if (fNames[i] == fName)
		{
			switch (i)
			{
			case 0:
				tmp = (this->*ptr[0])(target);
				break;
			case 1:
				tmp = (this->*ptr[1])(target);
				break;
			case 2:
				tmp = (this->*ptr[2])(target);
				break;
			default:
				break;
			}
			std::cout << "Intern creates " << tmp->getName() << std::endl;
		}
	}
    return (tmp);		
}


Intern::InternException::InternException( std::string str ) : error(str)
{}

const char*	Intern::InternException::what() const throw()
{
	return (this->error.c_str());
}

Intern::InternException::~InternException() throw() {};
