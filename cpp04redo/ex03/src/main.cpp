/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:50:40 by ajehle            #+#    #+#             */
/*   Updated: 2024/09/13 14:15:04 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/AMateria.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/Character.hpp"
#include "../include/ICharacter.hpp"
#include "../include/MateriaSource.hpp"

static void printInventoryStatus(Character& character) {
	std::cout << character.getName() << "'s Inventory:" << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << "Slot " << i << ": ";
		AMateria* materia = character.getMateria(i);
		if (materia) {
			std::cout << materia->getType() << std::endl;
		} else {
			std::cout << "Empty" << std::endl;
		}
	}
}

int main() {
		std::cout << "Starting tests..." << std::endl;

		// Create a MateriaSource and learn some Materias
		MateriaSource* source = new MateriaSource();
	std::cout << std::endl;
		AMateria* ice = new Ice();
	std::cout << std::endl;
		AMateria* cure = new Cure();
	std::cout << std::endl;
		source->learnMateria(ice);
	std::cout << std::endl;
		source->learnMateria(cure);
	std::cout << std::endl;

		// Create characters
		Character* me = new Character("Me");
	std::cout << std::endl;
		Character* bob = new Character("Bob");
	std::cout << std::endl;

		// Equip Materias
		AMateria* tmp;
		tmp = source->createMateria("ice");
		me->equip(tmp);
		tmp = source->createMateria("cure");
		me->equip(tmp);
	std::cout << std::endl;

		// Print inventory status
		printInventoryStatus(*me);
	std::cout << std::endl;

		// Use Materias
		me->use(0, *bob);
		me->use(1, *bob);
	std::cout << std::endl;

		// Unequip a Materia
		AMateria* tmp_mat = me->getMateria(0);
		me->unequip(0);
		std::cout << "After unequipping slot 0:" << std::endl;
	std::cout << std::endl;

		printInventoryStatus(*me);
	std::cout << std::endl;

		// Create new Character and test deep copy
		Character* another = new Character(*me);
		std::cout << "Deep copy character:" << std::endl;
		printInventoryStatus(*another);
	std::cout << std::endl;

		// Cleanup
		delete me;
	std::cout << std::endl;
		delete bob;
	std::cout << std::endl;
		delete another;
	std::cout << std::endl;
		delete source;
	std::cout << std::endl;
		delete ice;
	std::cout << std::endl;
		delete cure;
	std::cout << std::endl;
		delete tmp_mat;

		std::cout << "Tests completed." << std::endl;

		return 0;
}
