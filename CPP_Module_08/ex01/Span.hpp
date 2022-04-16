#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <exeption>

class Span
{
private:
	unsigned int n;
	std::vector<int> data;
public:
	explicit Span( unsigned int n );
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();
	void addNumber(int num);
	template<typename T>
	void addNumber(T start, T end);
	int longestSpan();
	int shortestSpan();
};

template<typename T>
void Span::addNumber(T start, T end)
{
	int dist = end - start;
	if (this->data.size() + dist > this->n)
		throw std::out_of_range("Unable to add element. Span is full");
	this->data.insert(this->data.begin(), start, end);
	std::sort(this->data.begin(), this->data.end());
}

