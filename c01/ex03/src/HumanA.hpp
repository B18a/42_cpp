/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:55:20 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 13:55:21 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
  public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void attack(void);

  private:
	std::string _name;
	Weapon &_weapon;
};

#endif
