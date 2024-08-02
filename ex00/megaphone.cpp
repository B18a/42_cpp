#include <iostream>

int	is_lower_case(char c)
{
	if(c >= 'a' && c <= 'z')
		return(1);
	return(0);
}

int	main(int argc, char **argv)
{
	int	i;
	char c;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if(is_lower_case(argv[1][i]))
				c = argv[1][i] - 32;
			else
				c = argv[1][i];
			std::cout << c;
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return(0);
}
