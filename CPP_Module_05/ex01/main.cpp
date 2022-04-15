#include "Bureaucrat.hpp"

int main()
{

	try {
		Form	test("Form1", 1, 1);
		std::cout << "1: OK" << std::endl << test << std::endl;
	} catch (std::exception & e) {
		std::cout << "1: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Form	test("Form2", 150, 150);
		std::cout << "2: OK: " << std::endl << test << std::endl;
	} catch (std::exception & e) {
		std::cout << "2: " << e.what() << std::endl;
	}

	try {
		Form	test("Form3", 151, 150);
		std::cout << "3: OK: " << std::endl << test << std::endl;
	} catch (std::exception & e) {
		std::cout << "3: " << e.what() << ": sign Grade - 151" << std::endl;
	}

	std::cout << std::endl;

	try {
		Form	test("Form4", 1, 0);
		std::cout << "4: OK" << std::endl << test << std::endl;
	} catch (std::exception & e) {
		std::cout << "4: " << e.what() << ": execute Grade - 0" << std::endl;
	}

	try {
		Form	testF("Form5", 1, 1);
		std::cout << testF << std::endl;
		Bureaucrat	testB("bro", 150);
		std::cout << testB << std::endl;
		std::cout << "trying to sign" << std::endl;
		testB.signForm(&testF);
		std::cout << "5: OK" << ": form signed " << testF.getName() << std::endl;
	} catch (std::exception & e) {
		std::cout << "5: " << e.what() << ": form can't be signed" << std::endl;
	}

	std::cout << std::endl;

	try {
		Form	testF("Form6", 1, 1);
		std::cout << testF << std::endl;
		Bureaucrat	testB("anton", 1);
		std::cout << testB << std::endl;
		testB.signForm(&testF);
		std::cout << "6: OK" << ": form signed " << testF.getName() << std::endl;
	} catch (std::exception & e) {
		std::cout << "6: " << e.what() << ": form can't be signed" << std::endl;
	}


	std::cout << std::endl;

	try {
		Form	testF("Form7", 100, 1);
		std::cout << testF << std::endl;
		Bureaucrat	testB("egor", 99);
		std::cout << testB << std::endl;
		std::cout << "trying to sign" << std::endl;
		testB.signForm(&testF);
		std::cout << "7" << ": form signed " << testF.getName() << std::endl;
	} catch (std::exception & e) {
		std::cout << "7: " << e.what() << ": form can't be signed" << std::endl;
	}
	return (0);
}