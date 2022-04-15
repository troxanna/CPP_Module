#pragma once
#include <iostream>

template <typename T>
const T& max(const T& a, const T& b)
{
    return (a > b) ? a : b;
}


template <typename T>
const T& min(const T& a, const T& b)
{
    return (a < b) ? a : b;
}

template <typename T>
void swap ( T& a, T& b )
{
  T c(a); 
  a = b; 
  b = c;
}

// class Awesome {
// public:
// 	int n_;
// 	Awesome(int n) : n_(n) {}
// 	bool operator==(const Awesome& other) const {return (this->n_ == other.n_);}
// 	bool operator!=(const Awesome& other) const {return (this->n_ != other.n_);}
// 	bool operator>(const Awesome& other) const {return (this->n_ > other.n_);}
// 	bool operator<(const Awesome& other) const {return (this->n_ < other.n_);}
// 	bool operator<=(const Awesome& other) const {return (this->n_ <= other.n_);}
// 	bool operator>=(const Awesome& other) const {return (this->n_ >= other.n_);}
// };

// std::ostream& operator<<(std::ostream& out, const Awesome& awesome) {
// 	out << "This is awesome " << awesome.n_;
// 	return out;
// }