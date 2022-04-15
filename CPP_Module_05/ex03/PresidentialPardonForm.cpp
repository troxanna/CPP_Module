#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("Presidential", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & other ) : Form(other)
{
	this->target = other.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm & other )
{
    if (this == &other)
		return (*this);
	this->target = other.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

const std::string & PresidentialPardonForm::getTarget() const
{
    return (this->target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &exec) const
{
    if (!this->getIsSigned())
        throw Form::UnableExecuteFormException("Form is not signed\n");
    if (exec.getGrade() < this->getExecuteGrade())
        throw Form::UnableExecuteFormException("Grade of bureaucrat of the is too low for executing the form\n");
    this->action();  
}

void    PresidentialPardonForm::action( void ) const
{
    // std::cout << "*some drilling noises*" << std::endl;
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
