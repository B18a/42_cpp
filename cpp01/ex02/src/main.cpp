/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:39:32 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 11:51:39 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string =  "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;


	std::cout << "The address of string		" << &string << std::endl;
	std::cout << "The address of stringPTR	" << stringPTR << std::endl;
	std::cout << "The address of stringREF	" << &stringREF << std::endl;


	std::cout << std::endl;
	std::cout << "The value of string		" << string << std::endl;
	std::cout << "The value of stringPTR		" << *stringPTR << std::endl;
	std::cout << "The value of stringREF		" << stringREF << std::endl;
	return (0);
}



/*
a reference is an alias
---------------------------------------------------------
a reference musst be tied to a variable:

	int &illegal_ref = int_that_exists;	✅
	int &illegal_ref = NULL;			❌

---------------------------------------------------------
a reference cant be changed

	int &ref = i;		✅
	int &ref = other_i;	❌

---------------------------------------------------------
a reference cant be mathed

	int &ref = i;		✅
	int &ref2 = &i + 4;	❌

---------------------------------------------------------
there is no double reference like pointers

	int x = 1;
	int *pX = &x;
	int **ppX = &pX;	✅

	int &ref = x;
	int &&rRef = ref;	❌
*/
