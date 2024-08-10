
#include<iostream>
//#include"HumanA.hpp"


void	memory_man(int argc, std::string **str_argv)
{
	int	i = 0;
	if(str_argv != nullptr)
	{
		while(i < argc)
		{
			delete str_argv[i];
			i++;
		}
		delete[] str_argv;
	}
}


int main(int argc, char** argv)
{
	std::string **str_argv;
	int	i;
	if(argc == 4)
	{
		i = 0;
		str_argv = new std::string * [3];
		if(str_argv == nullptr)
			return 1;
		while(i < 3)
		{
			str_argv[i] = new std::string(argv[i + 1]);
			if(str_argv[i] == nullptr)
			{
				memory_man(3, str_argv);
				return 1;
			}

			std::cout << str_argv[i] << std::endl;
			i++;
		}
		memory_man(3, str_argv)	;
		return 0;
	}
	else
		return 1;
}

