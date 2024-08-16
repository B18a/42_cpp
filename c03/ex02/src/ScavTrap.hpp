/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:22:13 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 20:21:47 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &cpy);				// copy constuctor
	ScavTrap &operator=(const ScavTrap &cpy);	// copy assignment operator
	~ScavTrap(void);

	void guardGate();

  private:

};

#endif
