/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:22:13 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 20:37:47 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
  public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &cpy);				// copy constuctor
	ClapTrap &operator=(const ClapTrap &cpy);	// copy assignment operator
	~ClapTrap(void);

	// member functions
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

  protected:
	std::string _name;
	unsigned int _health;
	unsigned int _energy;
	unsigned int _damage;
};

#endif
