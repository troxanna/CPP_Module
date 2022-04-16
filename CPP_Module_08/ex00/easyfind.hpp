#pragma once
#include <iostream>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T &args, int item)
{
	typename T::iterator it = std::find(args.begin(), args.end(), item);
	if (it == args.end())
		throw std::runtime_error("Item not fount");
	return it;
}