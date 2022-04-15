#include "Base.hpp"

int main()
{
	Base *unknow = generate();
	identify(unknow);
	identify(*unknow);
}