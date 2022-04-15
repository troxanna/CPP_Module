#pragma once
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
    Form*   shrubberyCreation(std::string& target);
    Form*   robotomyRequest(std::string& target);
    Form*   presidentialPardon(std::string& target);
    Form*	robotomy(std::string &target);
public:
    Intern( void );
    ~Intern();
    Intern(const Intern &other);
    Intern& operator=(const Intern &other);
    Form*	makeForm(std::string fName, std::string target);
    //Form *(Intern::*ptr[3])(const std::string&);
    class InternException : public std::exception
	{
	protected:
		std::string	error;
	public:
		InternException( std::string str );
		virtual ~InternException() throw();
		virtual const char*	what() const throw();
	};
};
