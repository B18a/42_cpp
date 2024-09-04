/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:27:43 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/30 15:21:52 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
  public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& orig);
	ClapTrap& operator=(const ClapTrap& orig);
	~ClapTrap(void);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void printStatus(void);

  protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
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
