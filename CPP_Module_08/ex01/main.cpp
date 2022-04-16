#include "Span.hpp"
#include <vector>
#include <list>
#include <string>

#define MAX_VAL 10

int main() 
{
	Span sp = Span(15);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "***   simple addition   ***\n";
	std::cout << "Min different between items: " << sp.shortestSpan() << std::endl;
	std::cout << "Max different between items: " << sp.longestSpan() << std::endl;
	std::cout <<std::endl;
	
	std::vector<int> v;
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 10;
        v.push_back(value);
    }
	try
	{
		std::cout << "***   iterators addition  ***\n";
		// std::cout << v.end() - v.begin() <<std::endl;
		sp.addNumber(v.begin(), v.end());
		std::cout << "Min different between items: " << sp.shortestSpan() << std::endl;
		std::cout << "Max different between items: " << sp.longestSpan() << std::endl;
		std::cout <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "***   exeption  ***\n";
		sp.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout <<std::endl;
	return (0);
}