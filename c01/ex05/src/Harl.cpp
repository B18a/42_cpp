#include"Harl.hpp"


Harl::Harl(void){}
Harl::~Harl(void){}


// void	(Harl::*funcPtr[4])(void)
// funcPtr[4]	- declaration of an array with 4 elements
// void			- no return value
// (void)		- takes no parameter
// Harl::*		- indication that funcPtr is a member function of Class harl


void	Harl::complain(std::string level)
{
	int	i;
	void	(Harl::*funcPtr[4])(void);
	std::string levels[4];

	i = 0;

	funcPtr[0] = &Harl::debug;
	funcPtr[1] = &Harl::info;
	funcPtr[2] = &Harl::warning;
	funcPtr[3] = &Harl::error;

	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";

	while(i < 4)
	{
		if(levels[i] == level)
			(this->*funcPtr[i])();
		i++;
	}
}

void	Harl::debug(void)
{
	std::cout<< "DEBUG" << std::endl;
}


void	Harl::info(void)
{
	std::cout<< "INFO" << std::endl;

}

void	Harl::warning(void)
{
	std::cout<< "WARNING" << std::endl;
}


void	Harl::error(void)
{
	std::cout<<  "ERROR" << std::endl;
}
