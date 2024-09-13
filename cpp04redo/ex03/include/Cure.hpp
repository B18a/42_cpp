/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:34:23 by ajehle            #+#    #+#             */
/*   Updated: 2024/09/04 08:51:59 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include"AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& cpy);
		Cure& operator=(const Cure& cpy);
		~Cure();

		// virtual AMateria* clone() const;
		AMateria* clone() const;
		// virtual void use(ICharacter& target);
		void use(ICharacter& target);
};

#endif
