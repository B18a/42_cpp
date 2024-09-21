/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:37:41 by ajehle            #+#    #+#             */
/*   Updated: 2024/09/04 08:53:00 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/Ice.hpp"
#include"../include/Colors.hpp"
#include"../include/ICharacter.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

Ice::Ice() : AMateria("ice")
{
	std::cout << BLUE << "Ice " << "CONSTRUCTOR called" << RESET << std::endl;
}

Ice::Ice(const Ice& cpy) : AMateria(cpy)
{
	std::cout << BLUE << "Ice " << "COPY CONSTRUCTOR called" << RESET << std::endl;
}

Ice& Ice::operator=(const Ice& cpy)
{
	std::cout << BLUE << "Ice " << "COPY ASSIGNMENT OPERATOR called" << RESET << std::endl;
	if(this != &cpy)
	{
		// type is const an cannot be reassigned
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << BLUE << "Ice " << "DESTRUCTOR called" << RESET << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

AMateria* Ice::clone() const
{
	std::cout << BLUE << "Ice " << "Cloning Materia" << RESET << std::endl;
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout	<< "* shoots an ice bolt at "
	 			<< target.getName()
				<< " *"
				<< std::endl;
}
