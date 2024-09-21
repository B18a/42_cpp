/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:34:23 by ajehle            #+#    #+#             */
/*   Updated: 2024/09/04 09:49:55 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include<iostream>
#include"AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}

		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif
