/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:34:23 by ajehle            #+#    #+#             */
/*   Updated: 2024/09/04 08:51:59 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include"AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& cpy);
		Ice& operator=(const Ice& cpy);
		~Ice();

		// virtual AMateria* clone() const;
		AMateria* clone() const;
		// virtual void use(ICharacter& target);
		void use(ICharacter& target);
};

#endif
