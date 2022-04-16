#include "Span.hpp"

Span::Span( unsigned int n ) : n(n), data()
{}

//как происходит копирование контейнеров

Span::Span(const Span &other) : n(other.n), data(other.data)
{}

Span &Span::operator=(const Span &other)
{
	this->n = other.n;
	this->data = other.data;
	return (*this);
}

void Span::addNumber(int num)
{
	if (this->data.size() == this->n)
		throw std::out_of_range("Unable to add element. Span is full");
	this->data.push_back(num);
}

Span::~Span()
{}

int Span::longestSpan()
{
	if (this->data.size() < 2) 
		throw std::invalid_argument("Not enough items");
	if (this->data.size() < 2)
		throw std::invalid_argument("Not enough items");
	std::vector<int>::iterator it1 = this->data.begin();
	std::vector<int>::iterator it2;
	int max;
	if (*it1 < *(it1 + 1))
		max = (*(it1 + 1) - *it1);
	else
		max = (*it1 - *(it1 + 1));
	for (; it1 < this->data.end(); it1++)
	{
		it2 = it1 + 1;
		for (; it2 != this->data.end(); it2++)
		{
			if (*it2 != *it1 && *it2 - *it1 > max)
				max = *it2 - *it1;
		}
	}
	return (max);
}

int Span::shortestSpan()
{
	if (this->data.size() < 2)
		throw std::invalid_argument("Not enough items");
	std::vector<int>::iterator it1 = this->data.begin();
	std::vector<int>::iterator it2;
	int min;
	if (*it1 < *(it1 + 1))
		min = (*(it1 + 1) - *it1);
	else
		min = (*it1 - *(it1 + 1));
	for (; it1 < this->data.end(); it1++)
	{
		it2 = it1 + 1;
		for (; it2 != this->data.end(); it2++)
		{
			if (*it2 != *it1 && (*it2 - *it1) > 0 && *it2 - *it1 < min)
				min = *it2 - *it1;
		}
	}
	return (min);
}