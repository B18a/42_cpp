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

	if (argc >= 2)
	{
		j = 1;
		while(argv[j])
		{
			i = 0;
			while(argv[j][i])
			{
				if(is_lower_case(argv[j][i]))
					c = argv[j][i] - 32;
				else
					c = argv[j][i];
				std::cout << c;
				i++;
			}
			j++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return(0);
}
