/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:37:41 by ajehle            #+#    #+#             */
/*   Updated: 2024/09/04 14:12:40 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/Character.hpp"
#include"../include/ICharacter.hpp"
#include"../include/Colors.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

Character::Character(void) : _name("unknown")
{
	std::cout << ORANGE
	<< "Character "
	<< _name
	<< " CONSTRUCTOR for "
	<< _name
	<< " called"
	<< RESET
	<<  std::endl;
	initMateria();
}

Character::Character(std::string const & name) : _name(name)
{
	std::cout << ORANGE
	<< "Character "
	<< "CONSTRUCTOR for "
	<< _name
	<< " called"
	<< RESET
	<< std::endl;
	initMateria();
}

Character::Character(const Character& cpy)
{
	std::cout << ORANGE
	<< "Character "
	<< "COPY CONSTRUCTOR called"
	<< RESET
	<< std::endl;
	*this = cpy;
}

Character& Character::operator=(const Character& cpy)
{
	std::cout << ORANGE
	<< "Character "
	<< "COPY ASSIGNMENT OPERATOR called"
	<< RESET
	<< std::endl;
	if(this != &cpy)
	{
		this->_name = cpy._name;
	}
	return (*this);
}

Character::~Character()
{
	std::cout << ORANGE
	<< "Character "
	<< this->_name
	<< " DESTRUCTOR for called"
	<< RESET
	<< std::endl;
	deleteMateria();
}

/****************************************************/
/*			PRIVATE MEMBER FUNCTIONS				*/
/****************************************************/

void Character::initMateria(void)
{
	for(int i = 0; i < MAXMATERIA; i++)
		this->_materia[i] = nullptr;
}

void Character::deleteMateria(void)
{
	for(int i = 0; i < MAXMATERIA; i++)
	{
		if(this->_materia[i] != nullptr)
			delete(this->_materia[i]);
		this->_materia[i] = nullptr;
	}
}

/****************************************************/
/*			PUBLIC MEMBER FUNCTIONS					*/
/****************************************************/

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if(m == nullptr)
		return;
	for(int i = 0; i < MAXMATERIA; i++)
	{
		if(this->_materia[i] == nullptr)
		{
			std::cout << this->getName()
			<< " equiped Materia "
			<< m->getType() << " at index "
			<< i
			<< std::endl;
			this->_materia[i] = m;
			return;
		}
	}
	std::cout << "Materia full - no new Materia equiped" << std::endl;
}

void Character::unequip(int idx)
{
	if(idx >= MAXMATERIA || this->_materia[idx] == nullptr)
		return;
	this->_materia[idx] = nullptr;
	std::cout << this->getName()
	<< " unequiped Materia "
	<< _materia[idx]->getType()
	<< " at index "
	<< idx
	<< std::endl;

}

void Character::use(int idx, ICharacter& target)
{
	if(idx >= MAXMATERIA || this->_materia[idx] == nullptr)
		return;
	this->_materia[idx]->use(target);
}
