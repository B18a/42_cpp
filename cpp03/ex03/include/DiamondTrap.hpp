/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:22:13 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/17 10:35:52 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
  public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &cpy);				// copy constuctor
	DiamondTrap &operator=(const DiamondTrap &cpy);		// copy assignment operator
	~DiamondTrap(void);

	void whoAmI();
  private:
	std::string _name;

};

#endif


/****************************************************/
/*				THE DIAMOND PROBLEM					*/
/****************************************************/
/*

	A   A
	|   |
	B   C
	 \ /
	  D

the diamond solution:
keyword
virtual inheritance

	  A
	 / \
	B   C
	 \ /
	  D

with virtual inheritance only once the class A is inherited
*/
