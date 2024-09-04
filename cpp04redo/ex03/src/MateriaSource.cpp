/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:10:08 by ajehle            #+#    #+#             */
/*   Updated: 2024/09/04 15:16:52 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/MateriaSource.hpp"
#include"../include/Colors.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

MateriaSource::MateriaSource(void)
{
	std::cout	<< CYAN
				<< "MateriaSource "
				<< " CONSTRUCTOR for "
				<< " called"
				<< RESET
				<<  std::endl;
}


MateriaSource::MateriaSource(const MateriaSource& cpy)
{
	std::cout	<< CYAN
				<< "MateriaSource "
				<< "COPY CONSTRUCTOR called"
				<< RESET
				<< std::endl;
	*this = cpy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& cpy)
{
	std::cout	<< CYAN
				<< "MateriaSource "
				<< "COPY ASSIGNMENT OPERATOR called"
				<< RESET
				<< std::endl;
	if(this != &cpy)
	{

	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout	<< CYAN
				<< "MateriaSource "
				<< " DESTRUCTOR for called"
				<< RESET
				<< std::endl;
}

/****************************************************/
/*			PUBLIC MEMBER FUNCTIONS					*/
/****************************************************/

void MateriaSource::learnMateria(AMateria*)
{

}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	
}
