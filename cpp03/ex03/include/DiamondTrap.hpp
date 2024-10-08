/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:44:52 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/30 15:25:27 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include"FragTrap.hpp"
#include"ScavTrap.hpp"

#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
  public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	~DiamondTrap(void);
	DiamondTrap(const DiamondTrap& orig);
	DiamondTrap& operator=(const DiamondTrap& orig);

	using ScavTrap::attack;
	void whoAmI();
  private:
	std::string _name;
};

#endif
