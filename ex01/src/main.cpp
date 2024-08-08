/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:53:38 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/08 17:51:17 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include"PhoneBook.hpp"


int main (void)
{
	std::string input;
	PhoneBook book;

	while(1)
	{
		// std::cout<<"Enter a Command : [SEARCH] [ADD] [EXIT]" << std::endl;
		input = book.get_input_safe("Enter a Command : [SEARCH] [ADD] [EXIT]\n");
		if(input == "")
			return(1);
		else if(input == "SEARCH")
		{
			book.search();
		}
		else if(input == "ADD")
		{
			if(book.add())
				return(0);
		}
		else if(input == "EXIT")
		{
			std::cout<<"Byebye" << std::endl;
			return(0);
		}
		else
			std::cout<<"Wrong Command" << std::endl;
	}
}
