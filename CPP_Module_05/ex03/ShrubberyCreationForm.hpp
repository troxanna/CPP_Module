#pragma once
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
   std::string target;
public:
    ShrubberyCreationForm( std::string target );
    ShrubberyCreationForm( const ShrubberyCreationForm & other );
    ShrubberyCreationForm& operator=( const ShrubberyCreationForm & other );
    ~ShrubberyCreationForm();
    const std::string & getTarget() const;
    virtual void	execute(Bureaucrat const &exec) const;
	void    action( void ) const;
};

