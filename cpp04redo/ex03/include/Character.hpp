/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:34:23 by ajehle            #+#    #+#             */
/*   Updated: 2024/09/04 09:49:55 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include<iostream>
#include"AMateria.hpp"
#include"ICharacter.hpp"

#define MAXMATERIA 4

class Character : public ICharacter
{
	public:
		Character();
		Character(std::string const & name);
		Character(const Character& cpy);
		Character& operator=(const Character& cpy);
		~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string	_name;
		AMateria*	_materia[MAXMATERIA];

		void initMateria();
		void deleteMateria();
		void copyMateria(const Character& cpy);
};

#endif
