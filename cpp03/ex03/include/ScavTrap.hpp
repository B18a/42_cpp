/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:27:43 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/30 15:25:17 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include"ClapTrap.hpp"

#include <iostream>

class ScavTrap : virtual public ClapTrap
{
  public:
	ScavTrap(void);
	ScavTrap(std::string name);
	~ScavTrap(void);
	ScavTrap(const ScavTrap& orig);
	ScavTrap& operator=(const ScavTrap& orig);

	void attack(const std::string& target);
	void guardGate(void);

	static const unsigned int default_hitPoints = 100;
	static const unsigned int default_energyPoints = 50;
	static const unsigned int default_attackDamage = 20;
};

#endif
