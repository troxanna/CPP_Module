#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string target;
public:
    RobotomyRequestForm( std::string target );
    RobotomyRequestForm( const RobotomyRequestForm & other );
    RobotomyRequestForm& operator=( const RobotomyRequestForm & other );
    ~RobotomyRequestForm();
	const std::string & getTarget() const;
    virtual void	execute(Bureaucrat const &exec) const;
	void    action( void ) const;
};
