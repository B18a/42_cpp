/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:37:41 by ajehle            #+#    #+#             */
/*   Updated: 2024/09/04 13:18:35 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/AMateria.hpp"
#include"../include/Colors.hpp"
#include"../include/ICharacter.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

AMateria::AMateria() : _type("")
{
	std::cout << MAGENTA << "AMateria " << "CONSTRUCTOR for " << "DEFAULT" << " called" << RESET <<  std::endl;
}
AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << MAGENTA << "AMateria " << "CONSTRUCTOR for " << this->_type << " called" << RESET << std::endl;
}

AMateria::AMateria(const AMateria& cpy)
{
	std::cout << MAGENTA << "AMateria " << "COPY CONSTRUCTOR called" << RESET << std::endl;
	*this = cpy;
}

AMateria& AMateria::operator=(const AMateria& cpy)
{
	std::cout << MAGENTA << "AMateria " << "COPY ASSIGNMENT OPERATOR called" << RESET << std::endl;
	if(this != &cpy)
	{
		// this->_type = cpy._type;
		// reassigning a const member not possible !
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << MAGENTA << "AMateria " << "DESTRUCTOR for " << this->_type << " called" << RESET << std::endl;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout	<< "AMateria  "
				<< this->_type
				<< " used at"
	 			<< target.getName()
				<< std::endl;
}
