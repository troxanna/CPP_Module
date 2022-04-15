#include "Bureaucrat.hpp"

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
    const int getSignGrade() const;
    const int getExecuteGrade() const;
    bool Form::getIsSigned() const;
    ~Form();
};

std::ostream& operator<<(std::ostream &out, const Form &object);