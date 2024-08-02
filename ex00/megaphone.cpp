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
	int	j;
	char c;

	i = 0;
	j = 1;
	if (argc >= 2)
	{
		while(argv[j])
		{
			while(argv[j][i])
			{
				if(is_lower_case(argv[j][i]))
					c = argv[j][i] - 32;
				else
					c = argv[j][i];
				std::cout << c;
				i++;
			}
			i = 0;
			j++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return(0);
}
