#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string name;
    bool isSigned;
    const int signGrade;
    const int executeGrade;
public:
    Form( const std::string & name, int signGrade, int executeGrade );
    Form( const Form & other );
    Form& operator=( const Form & other );
    const std::string & getName() const;
    int getSignGrade() const;
    int getExecuteGrade() const;
    bool getIsSigned() const;
    void    beSigned(const Bureaucrat & obj);
	virtual void	execute(Bureaucrat const &exec) const = 0;
    ~Form();

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

	class UnableExecuteFormException : public std::exception
	{
	private:
		std::string	error;
	public:
		explicit UnableExecuteFormException( std::string str );
		virtual ~UnableExecuteFormException() throw();
		virtual const char*	what() const throw();
	};
};

std::ostream& operator<<(std::ostream &out, const Form &object);