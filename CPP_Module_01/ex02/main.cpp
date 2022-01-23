#include <iostream>
#include <string>

int	main( void )
{
	std::string orig_str = "HI THIS IS BRAIN";
	std::string *ptr_str = &orig_str;
	std::string &ref_str = orig_str;

	std::cout << "Original string address: " << &orig_str << std::endl;
	std::cout << "Pointer string address: " << ptr_str << std::endl;
	std::cout << "Reference string address: " << &ref_str << std::endl;

	std::cout << "Original string: " << orig_str << std::endl;
	std::cout << "Pointer string: " << *ptr_str << std::endl;
	std::cout << "Reference string: " << ref_str << std::endl;
}