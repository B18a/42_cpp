/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:51:30 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 11:58:57 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"
#include "../include/Colors.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

Brain::Brain(void)
{
	std::cout << "Brain " << "Constructor called" << std::endl;
}

Brain::Brain(const Brain& cpy)
{
	std::cout << "Brain " << "Copy constructor called" << std::endl;
	for(int i = 0; i < 100; ++i)
	{
		this->ideas[i] = cpy.ideas[i];
	}
}

Brain& Brain::operator=(const Brain& cpy)
{
	std::cout << "Brain " << " copy assignment operator called" << std::endl;
	if(this != &cpy)
	for(int i = 0; i < 100; ++i)
	{
		this->ideas[i] = cpy.ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain " << "Destructor called" << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/
