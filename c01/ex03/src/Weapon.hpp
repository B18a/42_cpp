/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasjehle <andreasjehle@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:55:59 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/21 14:19:12 by andreasjehl      ###   ########.fr       */
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

		std::string const&	getType(void) const;
		void				setType(std::string type);

	private:
		std::string	_type;
};

#endif
