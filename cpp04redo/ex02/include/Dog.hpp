/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:51:39 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 10:58:24 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include"Animal.hpp"
#include"Brain.hpp"

class Dog : public Animal
{
  public:
	Dog(void);
	Dog(const Dog& cpy);
	Dog& operator=(const Dog& cpy);
	~Dog(void);

	void makeSound() const override; 

  private:
	Brain* brain;

};


#endif


/****************************************************/
/*				EXPLANATIONS						*/
/****************************************************/
/*
	void makeSound() const override; 

	"overriding" the function because in base class animal the function virtual!
	if it would be not virtual in the base it would be "redefining"
	with keyword "override" the compiler checks if this functions exits 
	in the base class and hast the same signature (name, parameter and const or not)

*/