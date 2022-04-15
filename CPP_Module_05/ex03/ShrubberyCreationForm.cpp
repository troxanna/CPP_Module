#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("Shrubbery", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & other ) : Form(other)
{
	this->target = other.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm & other )
{
    if (this == &other)
		return (*this);
	this->target = other.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

const std::string & ShrubberyCreationForm::getTarget() const
{
    return (this->target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &exec) const
{

    if (!this->getIsSigned())
        throw Form::UnableExecuteFormException("Form is not signed\n");
    if (exec.getGrade() < this->getExecuteGrade())
        throw Form::UnableExecuteFormException("Grade of bureaucrat of the is too low for executing the form\n");
	this->action(); 
}

void    ShrubberyCreationForm::action( void ) const
{
    std::ofstream	file;
	std::string	file_name = this->getTarget() + "_shrubbery";

	file.open(file_name.c_str(), std::ofstream::trunc);
	if (!file.is_open())
		throw Form::UnableExecuteFormException("Error file\n");; 

	file << "     /\\     " << std::endl;
	file << "    /  \\    " << std::endl;
	file << "   /    \\   " << std::endl;
	file << "    /  \\    " << std::endl;
	file << "   /    \\   " << std::endl;
	file << "  /      \\  " << std::endl;
	file << " /        \\ " << std::endl;
	file << "     ||      " << std::endl;
	file << "     ||      " << std::endl;

	file.close();
}