#include "Harl.hpp"


std::string Harl::levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl( void )
{
	this->ptrFunc[0] = &Harl::debug;
	this->ptrFunc[1] = &Harl::info;
	this->ptrFunc[2] = &Harl::warning;
	this->ptrFunc[3] = &Harl::error;
	this->ptrFunc[4] = &Harl::other;
};

void Harl::complain( const std::string& level )
{
	int	filter;

	filter = -1;
	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			filter = i;
	switch (filter)
	{
	case -1:
		(this->*ptrFunc[4])();
		break;
	case 0:
		(this->*ptrFunc[0])();
		filter++;	
	case 1:
		(this->*ptrFunc[1])();
		filter++;
	case 2:
		(this->*ptrFunc[2])();
		filter++;
	case 3:
		(this->*ptrFunc[3])();
		break;
	}
}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void Harl::other(void) {
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}