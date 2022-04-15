#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string target;
public:
    PresidentialPardonForm( std::string target );
    PresidentialPardonForm( const PresidentialPardonForm & other );
    PresidentialPardonForm& operator=( const PresidentialPardonForm & other );
    const std::string & getTarget() const;
    ~PresidentialPardonForm();
    virtual void	execute(Bureaucrat const &exec) const;
    void    action( void ) const;
};
