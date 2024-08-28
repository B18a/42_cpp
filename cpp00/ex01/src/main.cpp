/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:53:38 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 11:27:56 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include"PhoneBook.hpp"

int main (void)
{
	std::string input;
	PhoneBook book;

	// book.add_test();

	while(1)
	{
		input = book.get_input_safe("Enter a Command : [SEARCH] [ADD] [EXIT]\n");
		if(input == "")
			return(1);
		else if(input == "SEARCH")
		{
			book.search();
		}
		else if(input == "ADD")
		{
			book.add();
		}
		else if(input == "EXIT")
		{
			return(0);
		}
		else
			std::cout<<"Wrong Command" << std::endl;
	}
}
