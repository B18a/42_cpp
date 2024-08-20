/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:54:17 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 13:54:23 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;	
	std::cout << "Address of string:	" << &string << std::endl;
	std::cout << "Address of stringPTR:	" << stringPTR << std::endl;
	std::cout << "Address of stringREF:	" << &stringREF << std::endl;
	std::cout << "Value of string:	" << string << std::endl;
	std::cout << "Value of stringPTR:	" << *stringPTR << std::endl;
	std::cout << "Value of stringREF:	" << stringREF << std::endl;
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