
#include"Harl.hpp"


int	main(int argc, char **argv)
{
		Harl	harl;

		if(argc == 2)
		{
			switch (harl.get_level(argv[1]))
			{
				case 0:
					harl.complain("DEBUG");
					break;
				case 1:
					harl.complain("INFO");
					break;
				case 2:
					harl.complain("WARNING");
					break;
				case 3:
					harl.complain("ERROR");
					break;
				case 4:
					std::cout<<"some blablabla"<<std::endl;
					break;
			}
		}
		else
			std::cout<<"some blablabla"<<std::endl;
		return (0);
}
