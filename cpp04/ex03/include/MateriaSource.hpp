/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:06:13 by ajehle            #+#    #+#             */
/*   Updated: 2024/09/13 12:21:57 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include<iostream>
#include"IMateriaSource.hpp"
#include"Character.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& cpy);
		MateriaSource& operator=(const MateriaSource& cpy);
		~MateriaSource();


		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria* _materia[MAXMATERIA];

		void initMateria();
		void deleteMateria();
		void copyMateria(const MateriaSource& cpy);
};

#endif
