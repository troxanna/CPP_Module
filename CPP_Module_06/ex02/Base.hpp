#pragma once
#include "iostream"
#include <random>
#include <exception>

class Base
{
private:
	/* data */
public:
	virtual ~Base() {};
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base * generate(void) 
{
	std::srand( time(0) );
	int random = std::rand() % 3;
	std::cout << random << std::endl;
	switch (random)
	{
	case 0:
		return (new A());
	case 1:
		return (new B());
	case 2:
		return (new C());
	default:
		break;
	}
	return (nullptr);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "This is A" <<std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "This is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "This is C" << std::endl;
	else
		std::cout << "Incorrect convert object" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &obj = dynamic_cast<A&>(p);
		std::cout << "This is A" <<std::endl;
		(void)obj;
	}
	catch(const std::exception& e)
	{
		try
		{
			B &obj = dynamic_cast<B&>(p);
			std::cout << "This is B" << std::endl;
			(void)obj;
		}
		catch(const std::exception& e)
		{
			try
			{
				C &obj = dynamic_cast<C&>(p);
				std::cout << "This is C" << std::endl;
				(void)obj;
			}
			catch(const std::exception& e)
			{
				std::cout << "Incorrect convert object" << std::endl;
				std::cerr << e.what() << '\n';
			}
			
		}
		
	}
}