#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat a("Anton", 1);
	Bureaucrat e("Egor", 150);

	try {Bureaucrat b("Bro", -1000);}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}

	std::cout << std::endl << std::endl;
	ShrubberyCreationForm test("dom");
	test.beSigned(e);
	try {test.execute(a);}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}

	std::cout << std::endl << std::endl;
	PresidentialPardonForm test1("Shrek");
	try {test1.beSigned(a);}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}
	test1.beSigned(e);
	try {test1.execute(a);}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}
	try {test1.execute(a);}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}

	std::cout << std::endl << std::endl;
	RobotomyRequestForm test2("Random");
	try {test2.beSigned(a);}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}
	try {test2.execute(a);}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}
}