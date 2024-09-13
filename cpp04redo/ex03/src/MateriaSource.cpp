/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:10:08 by ajehle            #+#    #+#             */
/*   Updated: 2024/09/13 14:10:50 by ajehle           ###   ########.fr       */
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
	initMateria();
}


MateriaSource::MateriaSource(const MateriaSource& cpy)
{
	std::cout	<< CYAN
				<< "MateriaSource "
				<< "COPY CONSTRUCTOR called"
				<< RESET
				<< std::endl;
	initMateria();
	copyMateria(cpy);
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
		deleteMateria();
		initMateria();
		copyMateria(cpy);
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
	deleteMateria();
}

/****************************************************/
/*			PRIVATE MEMBER FUNCTIONS				*/
/****************************************************/

void MateriaSource::initMateria(void)
{
	std::cout << "initMateria()" << std::endl;
	for(int i = 0; i < MAXMATERIA; i++)
		this->_materia[i] = nullptr;
}

void MateriaSource::deleteMateria(void)
{
	std::cout << "deleteMateria()" << std::endl;
	for(int i = 0; i < MAXMATERIA; i++)
	{
		if(this->_materia[i] != nullptr)
		{
			delete(this->_materia[i]);
			this->_materia[i] = nullptr;
		}
	}
}

void MateriaSource::copyMateria(const MateriaSource& cpy)
{
	std::cout << "copyMateria()" << std::endl;
	for(int i = 0; i < MAXMATERIA; i++)
	{
		if(cpy._materia[i] != nullptr)
			this->_materia[i] = cpy._materia[i]->clone();
		else
			this->_materia[i] = nullptr;
	}
}
/****************************************************/
/*			PUBLIC MEMBER FUNCTIONS					*/
/****************************************************/

void MateriaSource::learnMateria(AMateria* m)
{
	for(int i = 0; i < MAXMATERIA; i++)
	{
		if(_materia[i] == nullptr)
		{
			_materia[i] = m->clone();
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < MAXMATERIA; i++)
	{
		if(_materia[i] && _materia[i]->getType() == type)
		{
			return(_materia[i]->clone());
		}
	}
	return (nullptr);

}
