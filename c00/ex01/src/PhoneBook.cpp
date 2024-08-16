/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:53:50 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 13:08:56 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip> // needed for std::setw(10)
#include <string>  // needed for stoi

PhoneBook::PhoneBook(void)
{
	// std::cout << "Constructer PhoneBook called" << std::endl;
	this->index = 0;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "Destructer PhoneBook called" << std::endl;
}

std::string truncate(const std::string name)
{
	if (name.length() > 10)
		return (name.substr(0, 9) + ".");
	return (name);
}

void PhoneBook::search(void)
{
	int	i;
	int	num;

	i = 0;
	std::string index;
	std::cout << std::setw(10) << "INDEX"
				<< "|" << std::setw(10) << "FIRST NAME"
				<< "|" << std::setw(10) << "LAST NAME"
				<< "|" << std::setw(10) << "NICKNAME"
				<< "|" << std::endl;
	while (i < MAX_INDEX)
	{
		std::cout << std::setw(10) << i << "|" << std::setw(10) << truncate(this->contacs[i].getFirstName()) << "|" << std::setw(10) << truncate(this->contacs[i].getLastName()) << "|" << std::setw(10) << truncate(this->contacs[i].getNickName()) << "|" << std::endl;
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
		return ;
	}
	catch (const std::out_of_range)
	{
		std::cout << "Out of range: " << std::endl;
		return ;
	}
	if(num < 0 | num >= MAX_INDEX)
	{
		std::cout << "Invalid argument: " << std::endl;
		return ;
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

void PhoneBook::add(void)
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
}

void PhoneBook::add_test(void)
{
	contacs[0].setContact("Johnathan", "Doe", "Johnny", "123-456-7890",
		"Loves chocolate.");
	contacs[1].setContact("Alice", "Smith", "Ally", "987-654-3210",
		"Afraid of heights.");
	contacs[2].setContact("Bob", "Brown", "Bobby", "555-555-5555",
		"Secretly a gamer.");
	contacs[3].setContact("Catherine", "Johnson", "Cat", "111-222-3333",
		"Has a twin.");
	contacs[4].setContact("Michael", "Davis", "Mike", "444-444-4444",
		"Writes poetry.");
	contacs[5].setContact("Emily", "Miller", "Em", "222-333-4444",
		"Allergic to cats.");
	contacs[6].setContact("David", "Wilson", "Dave", "333-222-1111",
		"Plays the guitar.");
	contacs[7].setContact("Sophia", "Taylor", "Sophie", "666-777-8888",
		"Collects stamps.");
}
