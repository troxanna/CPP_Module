#include "MutantStack.hpp"
#include <vector>
#include <list>
#include <string>

#define MAX_VAL 10

int main() 
{
	// MutantStack<int> mstack;
	// mstack.push(5);
	// mstack.push(17);
	// std::cout << mstack.top() << std::endl;
	// mstack.pop();
	// std::cout << mstack.size() << std::endl;
	// mstack.push(3);
	// mstack.push(5);
	// mstack.push(737);
	// //[...]
	// mstack.push(0);
	// MutantStack<int>::iterator it = mstack.begin();
	// MutantStack<int>::iterator ite = mstack.end();
	// ++it;
	// --it;
	// while (it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;	
	// }
	// std::stack<int> s(mstack);
	// return (0);

	MutantStack<int> mstack;

	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 100;
        mstack.push(value);
    }
	std::cout << "Print stack!\n";
	for(MutantStack<int>::iterator begin = mstack.begin(); begin != mstack.end(); ++begin) {
		std::cout << *begin << ' ';
	}
	std::cout << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;
	for (size_t i = 0; i < 5; i++)
		mstack.pop();
	std::cout << "Print stack after 4 delete element!\n";
	for(MutantStack<int>::iterator begin = mstack.begin(); begin != mstack.end(); ++begin) {
		std::cout << *begin << ' ';
	}
	std::cout << std::endl;
	for (size_t i = 0; i < MAX_VAL; i++)
	{
		const int value = rand() % 100;
        mstack.push(value);
	}
	std::cout << "Print stack after 10 add elements!\n";
	for(MutantStack<int>::iterator begin = mstack.begin(); begin != mstack.end(); ++begin) {
		std::cout << *begin << ' ';
	}
	std::cout << std::endl;
	std::cout << "Size: " <<mstack.size() << std::endl;
}