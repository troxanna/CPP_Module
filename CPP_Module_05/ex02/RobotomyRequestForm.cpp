#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("Robotomy", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & other ) : Form(other)
{
	this->target = other.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm & other )
{
    if (this == &other)
		return (*this);
	this->target = other.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

const std::string & RobotomyRequestForm::getTarget() const
{
    return (this->target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &exec) const
{

    if (!this->getIsSigned())
        throw Form::UnableExecuteFormException("Form is not signed\n");
    if (exec.getGrade() < this->getExecuteGrade())
        throw Form::UnableExecuteFormException("Grade of bureaucrat of the is too low for executing the form\n");
    this->action();  
}

void    RobotomyRequestForm::action( void ) const
{
    std::cout << "*some drilling noises*" << std::endl;
    std::cout << this->getTarget() << " has been robotomized" << std::endl;
}