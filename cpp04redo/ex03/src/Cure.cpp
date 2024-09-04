/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:37:41 by ajehle            #+#    #+#             */
/*   Updated: 2024/09/04 08:53:00 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/Cure.hpp"
#include"../include/Colors.hpp"
#include"../include/ICharacter.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

Cure::Cure() : AMateria("cure")
{
	std::cout << GREEN << "Cure " << "CONSTRUCTOR called" << RESET << std::endl;
}

Cure::Cure(const Cure& cpy) : AMateria(cpy)
{
	std::cout << GREEN << "Cure " << "COPY CONSTRUCTOR called" << RESET << std::endl;
	*this = cpy;
}

Cure& Cure::operator=(const Cure& cpy)
{
	std::cout << GREEN << "Cure " << "COPY ASSIGNMENT OPERATOR called" << RESET << std::endl;
	if(this != &cpy)
	{
		this->_type = cpy._type;
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << GREEN << "Cure " << "DESTRUCTOR for " << this->_type << " called" << RESET << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

AMateria* Cure::clone() const
{
	std::cout << GREEN << "Cure " << "Cloning Materia" << RESET << std::endl;
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout	<< "* heals "
	 			<< target.getName()
				<< "’s wounds *"
				<< std::endl;
}
