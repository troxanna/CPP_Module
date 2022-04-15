#include "Form.hpp"

Form::Form( const std::string & name, int signGrade, int executeGrade ) : name(name), signGrade(signGrade), executeGrade(executeGrade)
{
    if (signGrade < 1 || executeGrade < 1)
        throw Bureaucrat::GradeTooLowException("Grade too low");
    else if (signGrade > 150 || executeGrade > 150)
        throw Bureaucrat::GradeTooHighException("Grade too high");
    this->isSigned = false;
}

Form::Form( const Form & other )  : name(other.getName()), signGrade(other.getSignGrade()), executeGrade(other.getExecuteGrade())
{
    this->isSigned = other.isSigned;
}

Form& Form::operator=( const Form & other )
{
    if (this == &other)
		return (*this);
    this->isSigned = other.isSigned;
    return (*this);
}

Form::~Form()
{}

void    Form::beSigned(const Bureaucrat & obj)
{
    if (this->getIsSigned()) {
		//std::cout << "Form " << getName() << " has been signed" << std::endl;
		return ;
	}
	if (obj.getGrade() > this->getSignGrade()) {
		throw GradeTooHighException("Bureaucrat have a too low grade");
	}
	this->isSigned = true;
}

const std::string & Form::getName() const
{
    return (this->name);
}
int Form::getSignGrade() const
{
    return (this->signGrade);
}

int Form::getExecuteGrade() const
{
    return (this->executeGrade);
}

bool Form::getIsSigned() const
{
	return (this->isSigned);
}

std::ostream& operator<< (std::ostream &out, const Form &obj)
{
    out << "Form: " << obj.getName() << std::endl;
    out << "Sign grade: " << obj.getSignGrade() << std::endl;
    out << "Execute grade: " << obj.getExecuteGrade() << std::endl;
    if (obj.getIsSigned())
        out << "Form signed" << std::endl;
    else
        out << "Form not signed" << std::endl;
    return out;
}

Form::GradeTooHighException::GradeTooHighException( std::string str ) : error(str)
{}

const char*	Form::GradeTooHighException::what() const throw()
{
    return error.c_str();
}

Form::GradeTooLowException::GradeTooLowException( std::string str ) : error(str)
{}

const char*	Form::GradeTooLowException::what() const throw()
{
    return error.c_str();
}

Form::GradeTooHighException::~GradeTooHighException() throw() {};

Form::GradeTooLowException::~GradeTooLowException() throw() {};

Form::UnableExecuteFormException::UnableExecuteFormException( std::string str ) : error(str)
{}

const char*	Form::UnableExecuteFormException::what() const throw()
{
    return error.c_str();
}

Form::UnableExecuteFormException::~UnableExecuteFormException() throw() {};