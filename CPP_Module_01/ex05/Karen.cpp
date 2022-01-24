#include "Karen.hpp"


std::string Karen::levels[4] = {"debug", "info", "warning", "error"};

Karen::Karen( void )
{
	this->ptrFunc[0] = &Karen::debug;
	this->ptrFunc[1] = &Karen::debug;
	this->ptrFunc[2] = &Karen::debug;
	this->ptrFunc[3] = &Karen::debug;
};

void Karen::complain( const std::string& level )
{
	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			(this->*ptrFunc[i])();
	// switch (level)
	// {
	// case Karen::levels[0]:
	// 	(this->*ptrFunc[0])();
	// 	break;	
	// case Karen::levels[1]:
	// 	(this->*ptrFunc[1])();
	// 	break;
	// case Karen::levels[2]:
	// 	(this->*ptrFunc[2])();
	// 	break;
	// case Karen::levels[3]:
	// 	(this->*ptrFunc[3])();
	// 	break;
	// }
}

void Karen::debug(void) {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}

void Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void Karen::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}