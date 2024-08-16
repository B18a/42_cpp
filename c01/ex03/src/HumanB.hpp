/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:55:36 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 13:55:39 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
  public:
	HumanB(std::string name);
	~HumanB(void);

	void attack(void);
	void setWeapon(Weapon &weapon);

  private:
	std::string _name;
	Weapon *_weapon;
};

#endif
