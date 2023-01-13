#include "Harl.hpp"
#include <iostream>

void Harl::debug(void){
	std::cout << "~DEBUG~" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
	std::cout << "~INFO~" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){
	std::cout << "~WARNING~" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void){
	std::cout << "~ERROR~" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::invalid(void){
	std::cout << "~INVALID~" << std::endl;
	std::cout << "rambling nonsense" << std::endl;
}

void Harl::complain(std::string level){
	std::string complaints[] = {"DEBUG", "INFO", "WARNING", "ERROR", ""};
	complaintsMsg rude;
	int i = 0;
	while (complaints[i] != level && i < 4)
		i++;
	switch (i)
	{
		case 0:
			rude = &Harl::debug;
			break;
		case 1:
			rude = &Harl::info;
			break;
		case 2:
			rude = &Harl::warning;
			break;
		case 3:
			rude = &Harl::error;
			break;
		case 4:
			rude = &Harl::invalid;
			break;
	}
	(this->*rude)();
}
