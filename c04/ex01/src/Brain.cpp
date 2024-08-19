/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:24:35 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/17 11:04:05 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"
#include "../include/Colors.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

Brain::Brain(void) 
{
	std::cout << RED << "Constructor for " << "Brain" << " called" << RESET << std::endl;
}

Brain::Brain(const Brain& cpy)
{
	std::cout << RED << "Copy constructor called" << RESET << std::endl;
	*this = cpy;
}

Brain& Brain::operator=(const Brain& cpy)
{
	std::cout << RED << "Copy assignment constructor called" << RESET << std::endl;
	this->ideas = cpy.ideas;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << RED << "Destructor for " << "Brain" << " called" << RESET << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

