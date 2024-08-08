/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:53:50 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/08 18:24:48 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>	// needed for std::setw(10)
#include <string>	// needed for stoi

PhoneBook::PhoneBook(void)
{
	// std::cout << "Constructer PhoneBook called" << std::endl;
	this->index = 0;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "Destructer PhoneBook called" << std::endl;
}



void PhoneBook::search(void)
{
	int	i = 0;
	int	num = 0;

	std::string index;
	std::cout << std::setw(10) << std::right << "  INDEX |" << "FIRST NAME |" << "LAST NAME |" << "NICKNAME " << std::endl;
	while (i < MAX_INDEX)
	{
		std::cout << i << this->contacs[i].getFirstName() << this->contacs[i].getLastName() << this->contacs[i].getNickName() << std::endl;
		i++;
	}
	index = get_input_safe("ENTER INDEX NUMBER:");
	try
	{
		num = std::stoi(index);
	}
	catch (const std::invalid_argument)
	{
		std::cout << "Invalid argument: " << std::endl;
		return;
	}
	catch (const std::out_of_range)
	{
		std::cout << "Out of range: " << std::endl;
		return;
	}
	this->contacs[num].printContact();

}

std::string PhoneBook::get_input_safe(std::string message)
{
	while (1)
	{
		std::string input;
		std::cout << message;
		if (!std::getline(std::cin, input))
			exit(0);
		if (input == "")
			std::cout << "Wrong input try again" << std::endl;
		else
			return (input);
	}
}

int PhoneBook::add(void)
{
	std::string first_name = get_input_safe("First Name	:");
	std::string last_name = get_input_safe("Last Name	:");
	std::string nick_name = get_input_safe("Nick Name	:");
	std::string number = get_input_safe("Number		:");
	std::string secret = get_input_safe("Darkest Secret	:");
	if (this->index >= MAX_INDEX)
		this->index = 0;
	this->contacs[this->index].setContact(first_name, last_name, nick_name,
		number, secret);
	this->index++;
	return (0);
}
