#pragma once
#include <iostream>

template <class T>
class Array
{
private:
	T *data;
	unsigned int n;
public:
	Array( void ) : data(nullptr), n(0) {};
	Array( unsigned int n )
	{
		if (n)
			this->data = new T[n];
		else
			this->data = nullptr;
		this->n = n;
	};
	Array( const Array& other ) {
		this->data = new T[other.n];
		this->n = other.n;
		for (size_t i = 0; i < other.n; i++) {
			this->data[i] = other.data[i];
		}
	}
	Array& operator=( const Array& other ) 
	{
		if (this == &other) 
			return *this;
		if (this->data)
			delete [] this->data;
		this->data = new T[other.n];
		this->n = other.n;
		for (size_t i = 0; i < other.n; i++) {
			this->data[i] = other.data[i];
		}
	}
	const T& operator[](size_t index) const;
	T& operator[](size_t index);
	size_t size() const { return this->n; }
	~Array( ) 
	{ 
		if ( this->data ) 
			delete this->data; 
	};
	void Erase();
};

template <typename T>
void Array<T>::Erase()
{
	if (this->data)
        delete[] this->data;
    this->data = nullptr;
    this->n = 0;
}

template <typename T>
T& Array<T>::operator[](size_t index) 
{
	if (index >= this->n) 
		throw std::out_of_range("Invalid index");
	return this->data[index];
}

template <typename T>
const T& Array<T>::operator[](size_t index) const
{
	if (index >= this->n)
		throw std::out_of_range("Invalid index");
	return this->data[index];
}

