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

	virtual void	makeSound() const;
	std::string		getType() const;

  protected:
	std::string type;
};


#endif

/****************************************************/
/*				EXPLANATIONS						*/
/****************************************************/
/*
	virtual ~Animal(void);
	
	if the destructor is not "virtual" the destructor of the derived class doesnt get called
	when deleting a derived class object through a base class pointer

------------------------------------------------------

	virtual void makeSound() const;

	if the function isnt marked as virtual it cannot be overriden by
	a derived class function in terms of polymorphism

*/