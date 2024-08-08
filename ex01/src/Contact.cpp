/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:17:33 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/08 14:52:17 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Contact.hpp"

// CONSTRUCTOR
Contact::Contact(void)
{
	// std::cout << "Constructer Contact called" << std::endl;
}

// DESTRUCTOR
Contact::~Contact(void)
{
	// std::cout << "Destructer Contact called" << std::endl;
}

std::string	Contact::getFirstName(void)
{
	return(first_name);
}

std::string	Contact::getLastName(void)
{
	return(last_name);
}

std::string	Contact::getNickName(void)
{
	return(nick_name);
}

// this-> : access to variable from class
void	Contact::setContact(std::string new_first_name, std::string new_last_name, std::string new_nick_name, std::string new_number, std::string new_secret)
{
	this->first_name = new_first_name;
	this->last_name = new_last_name;
	this->nick_name = new_nick_name;
	this->number = new_number;
	this->secret = new_secret;
}

void	Contact::printContact(void)
{
	std::cout<<"First Name	:"<< first_name << std::endl;
	std::cout<<"Last Name	:"<< last_name << std::endl;;
	std::cout<<"Nick Name	:"<< nick_name << std::endl;;
	std::cout<<"Number		:"<< number << std::endl;;
	std::cout<<"Darkest Secret	:"<< secret << std::endl;;
}
