#pragma once
#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack( void ) : std::stack<T>() {};
	MutantStack(const MutantStack &other) : std::stack<T>(other) {}
	MutantStack &operator=(const MutantStack &other)
	{
		if (this == &other)
			return (*this);
		std::stack<T>::operator=(other);
		return (*this);
	}
	~MutantStack() {};

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator c_iterator;

	iterator begin() {
		return (this->c.begin());
	}
	iterator end() {
		return (this->c.end());
	}

	c_iterator begin() const {
		return (this->c.begin());
	}
	c_iterator end() const {
		return (this->c.end());
	}
};

