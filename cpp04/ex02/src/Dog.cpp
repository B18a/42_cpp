/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:51:30 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 11:58:57 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Colors.hpp"

/****************************************************/
/*				CONSTRUCTORS						*/
/****************************************************/

Dog::Dog(void) : Animal("Dog"), brain(new Brain())
{
	std::cout << "Dog " << "Constructor called" << std::endl;
	//this->brain = new Brain();
}

Dog::Dog(const Dog& cpy) : Animal(cpy), brain(new Brain(*cpy.brain))
{
	std::cout << "Dog " << "Copy constructor called" << std::endl;
	//this->brain = new Brain(*cpy.brain);
}

Dog& Dog::operator=(const Dog& cpy)
{
	std::cout << "Dog" << " copy assignment operator called" << std::endl;
	if(this != &cpy)
	{
        Animal::operator=(cpy); // Assign base class part
        delete brain; // Clean up existing Brain
        brain = new Brain(*cpy.brain); // Deep copy Brain
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog " << "Destructor called" << std::endl;
	delete this->brain;
}

/****************************************************/
/*				MEMBER FUNCTIONS					*/
/****************************************************/

void Dog::makeSound() const
{
std::cout << YELLOW << "Dog Class makes sound" << RESET << std::endl;}