#include"Harl.hpp"


Harl::Harl(void){}
Harl::~Harl(void){}


int	Harl::get_level(std::string level)
{
	int	i;
	std::string levels[4];

	i = 0;
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	while(i < 4)
	{
		if(levels[i] == level)
			return i;
		i++;
	}
	return(4);
}


// void	(Harl::*funcPtr[4])(void)
// funcPtr[4]	- declaration of an array with 4 elements
// void			- no return value
// (void)		- takes no parameter
// Harl::*		- indication that funcPtr is a member function of Class harl


void	Harl::complain(std::string level)
{
	void	(Harl::*funcPtr[4])(void);

	funcPtr[0] = &Harl::debug;
	funcPtr[1] = &Harl::info;
	funcPtr[2] = &Harl::warning;
	funcPtr[3] = &Harl::error;

	(this->*funcPtr[get_level(level)])();
}

void	Harl::debug(void)
{
	std::cout<< "DEBUG" << std::endl;
	Harl::info();
}


void	Harl::info(void)
{
	std::cout<< "INFO" << std::endl;
	Harl::warning();
}

void	Harl::warning(void)
{
	std::cout<< "WARNING" << std::endl;
	Harl::error();
}


void	Harl::error(void)
{
	std::cout<<  "ERROR" << std::endl;
}
