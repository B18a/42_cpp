/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:55:59 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 13:56:01 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef WEAPON_HPP
 #define WEAPON_HPP

#include<iostream>

class Weapon
{
	public:
		Weapon(void);
		~Weapon(void);
		Weapon(std::string type);

		std::string const	&getType(void) const;
		void				setType(std::string type);

	private:
		std::string	_type;
};

#endif
