/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:51:39 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/21 20:16:14 by ajehle           ###   ########.fr       */
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

	void	attack();
	void	setWeapon(Weapon& weapon);

  private:
	std::string _name;
	Weapon* _weapon;
};

#endif
