#include "easyfind.hpp"
#include <vector>
#include <list>
#include <string>

#define MAX_VAL 25

int main() {

	std::cout << "*   VECTOR   *" << std::endl;
	std::vector<int> v;
	int	val;
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 10;
        v.push_back(value);
    }
	std::vector<int>::const_iterator it;
	it = v.begin();
	while (it++ != v.end())
		std::cout << *it << " ";
	std::cout << '\n';
	try
	{
		std::cout << "Введите число: " << std::endl;
		std::cin >> val;
		std::vector<int>::iterator it1 = easyfind(v, val);
		std::cout << "Successfully : " << *it1 << " " << std::endl;
		std::cout << "Введите число: " << std::endl;
		std::cin >> val;
		std::vector<int>::iterator it2 = easyfind(v, val);
		std::cout << "Successfully : " << *it2 << " " << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Result : " << e.what() << '\n';
	}

	// std::cout << "*   LIST   *" << std::endl;
	// std::list<double> l;
	// for (int i=0; i < MAX_VAL; ++i)
	// {
	// 	const double value = rand() % 10;
	// 	l.push_back(value);	
	// }
	// std::list<double>::const_iterator it;
	// it = l.begin();
	// while (it != l.end())
	// {
	// 	std::cout << *it << " ";
	// 	++it;
	// }
	// std::cout << '\n';
	// try
	// {
	// 	std::cout << "find 4" << std::endl;
	// 	std::list<double>::iterator it1 = easyfind(l, 4);
	// 	std::cout << "Successfully : " << *it1 << " " << std::endl;
	// 	std::cout << "find 5" << std::endl;
	// 	it1 = easyfind(l, 5);
	// 	std::cout << "Successfully : " << *it1 << " " << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << "Unsuccessfully : " << e.what() << '\n';
	// }
	return (0);
}