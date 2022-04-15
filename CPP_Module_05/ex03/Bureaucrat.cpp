#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string & name, int grade ) : name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException("Grade too low");
    else if (grade > 150)
        throw Bureaucrat::GradeTooHighException("Grade too high");
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & other )  : name(other.getName())
{
    this->grade = other.grade;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat & other )
{
    if (this == &other)
		return (*this);
    this->grade = other.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{}

const std::string & Bureaucrat::getName() const
{
    return (this->name);
}
int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void     Bureaucrat::incrementGrade(int n)
{
    if ((this->grade + n) > 150)
        throw Bureaucrat::GradeTooHighException("Grade too high");
    this->grade += n;
}
void     Bureaucrat::decrementGrade(int n)
{
    if ((this->grade - n) < 1)
        throw Bureaucrat::GradeTooHighException("Grade too low");
    this->grade -= n;
}

void Bureaucrat::signForm(Form *form)
{
    try
    {
        form->beSigned(*this);
		std::cout << this->getName() << " signed " << form->getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat &obj)
{
    out << obj.getName() << " , bureaucrat grade " << obj.getGrade();
 
    return out;
}

Bureaucrat::GradeTooHighException::GradeTooHighException( std::string str ) : error(str)
{}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
    return error.c_str();
}

Bureaucrat::GradeTooLowException::GradeTooLowException( std::string str ) : error(str)
{}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
    return error.c_str();
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {};

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {};

void	Bureaucrat::executeForm(Form const & form) const
{
    try
	{
		form.execute(*this);
		std::cout << "Bureaucrat executed " << form.getName() << std::endl;
	}
    catch(const Form::UnableExecuteFormException& e)
    {
        std::cerr << e.what() << '\n';
    }
	catch(const std::exception& e)
	{
		std::cout << "Bureaucrat couldn't execute form.\n";
		std::cerr << e.what() << '\n';
	}
}
