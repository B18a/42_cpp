/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:51:39 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 10:58:24 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
  public:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal& cpy);
	Animal& operator=(const Animal& cpy);
	virtual ~Animal(void);

	virtual void	makeSound() const = 0;
	std::string		getType() const;

  protected:
	std::string type;
};


#endif

/****************************************************/
/*				EXPLANATIONS						*/
/****************************************************/
/*
	virtual void	makeSound() const = 0;

	To achieve that Animal cannot be instantiated the class has to be made "abstract"
	To get that one function has to be declared as a "pure virtual function" by setting to 0
	It makes the Derived Class necessary to have their own implementation of the function

*/
/*

	To make a class non-instantiable in C++, you typically declare it as an abstract class by including at least one pure virtual function.
	A pure virtual function is a function that has no implementation in the base class and must be overridden by any derived class.
	This is done by setting the function equal to 0 in the class declaration.

*/