#pragma once
#include <iostream>
#include <stdexcept>
#include <string>
#include <fstream>
#include "Form.hpp"

class Form;
class UnableExecuteFormException;

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat( const std::string & name, int grade );
    Bureaucrat( const Bureaucrat & other );
    Bureaucrat& operator=( const Bureaucrat & other );
    const std::string & getName() const;
    int getGrade() const;
    ~Bureaucrat();
    void     incrementGrade(int n);
    void     decrementGrade(int n);
	void	signForm(Form *form) const;
	void	executeForm(Form const & form) const;

    class GradeTooHighException : public std::exception
	{
	private:
		std::string	error;
	public:
		explicit GradeTooHighException( std::string str );
		virtual ~GradeTooHighException() throw();
        // const std::string & getError() { return error; }
		virtual const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	private:
		std::string	error;
	public:
		explicit GradeTooLowException( std::string str );
		virtual ~GradeTooLowException() throw();
        // const std::string & getError() { return error; }
		virtual const char*	what() const throw();
	};
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat &obj);