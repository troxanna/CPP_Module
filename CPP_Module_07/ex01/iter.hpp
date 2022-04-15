#pragma once
#include <iostream>

template <typename T>
void	iter(T *array, size_t size, void func(const T& arg))
{
	for (size_t i = 0; i < size; i++)
	{
		func(array[i]);
	}
}

template <typename F>
void	printItem(const F& item)
{
	std::cout << item << std::endl;
}

// class Awesome {
// private:
// 	int n_;
// public:
// 	Awesome( void ) : n_(42) { return; }
// 	int get (void) const { return(this->n_); }
// };

// std::ostream& operator<<(std::ostream& out, const Awesome& awesome) {
// 	out << awesome.get();
// 	return out;
// }