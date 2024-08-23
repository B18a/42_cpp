/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:22:58 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 15:55:28 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

// advantage of passing a const reference for std::string :
// const	: variable cant be modified
// ref		: no copy of the variable is made, less memory is used
// using const references is common practice in C++

/*	NPOS
std::string::npos is a static member constant value with the greatest possible value for an element of type size_t.
This value, when used as the value for a len (or sublen) parameter in string's member functions, means "until the end of the string".
As a return value, it is usually used to indicate no matches.
*/

int	validString(std::string str1)
{
	if(str1 == "" || str1 == "\n")
		return(0);
	return(1);
}

void	read_file(std::ifstream& input, std::ofstream& output,
		const std::string& str1, const std::string& str2)
{
	size_t	pos;
	std::string line;

	while (std::getline(input, line))
	{
		pos = line.find(str1);
		while (validString(str1) && pos != std::string::npos)
		{
			line.erase(pos, str1.length());
			line.insert(pos, str2);
			pos = line.find(str1, pos + str2.length());
		}
		output << line << std::endl;
	}
}

int	check_streams(std::ifstream& input, std::ofstream& output)
{
	if (!input.is_open())
	{
		std::cout << "failed to open file" << '\n';
		return (1);
	}
	if (!output.is_open())
	{
		std::cout << "failed to create file.replace" << '\n';
		input.close();
		return (1);
	}
	return (0);
}

int	ft_replace(std::string filename, std::string str1, std::string str2)
{
	std::ifstream input(filename);
	std::ofstream output(filename + ".replace");
	if (check_streams(input, output))
		return (1);
	read_file(input, output, str1, str2);

	return (0);
}

int	main(int argc, char **argv)
{
	std::string filename;
	std::string str1;
	std::string str2;

	if (argc == 4)
	{
		filename = std::string(argv[1]);
		str1 = std::string(argv[2]);
		str2 = std::string(argv[3]);
		if (ft_replace(filename, str1, str2))
			return (1);
		return (0);
	}
	else
	{
		std::cout << "Wrong Arguments : [Textfile] [WORD TO REPLACE] [WORD TO SET] " << std::endl;
		return (1);
	}
}
