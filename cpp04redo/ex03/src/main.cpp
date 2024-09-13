/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:50:40 by ajehle            #+#    #+#             */
/*   Updated: 2024/09/13 13:19:04 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/Character.hpp"
#include "../include/ICharacter.hpp"

#include <iostream>

// int	main(void)
// {

// AMateria* ice = new Ice();
// const AMateria* cure = new Cure();

// std::cout << "\nCLONING" << std::endl;

// AMateria* ice2 = ice->clone();
// AMateria* cure2 = cure->clone();

// std::cout << "CLONING done\n" << std::endl;

// ICharacter* batman = new Character("Batman");
// ICharacter* joker = new Character("Joker");

// batman->equip(ice);
// batman->use(0, *joker);

// delete cure;
// delete cure2;
// delete batman;
// delete joker;

// }


// int main() {
//     // Create a Character with a name
//     Character hero("Hero");
//     Character villain("Villain");

//     // Create some Materia
//     AMateria* ice = new Ice();
//     AMateria* fire = new Cure();

//     // Equip the hero with Materia
//     hero.equip(ice);
//     hero.equip(fire);



//     // Use the copy assignment operator to copy hero to villain
// 	std::cout << "villan	" << villain.getName() << std::endl;
//     villain = hero;
// 	std::cout << "villan	" << villain.getName() << std::endl;


// 	std::cout << "end of programm" << std::endl;

//     return 0;
// }


#include <iostream>


#include "../include/AMateria.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/Character.hpp"
#include "../include/ICharacter.hpp"
#include "../include/MateriaSource.hpp"

// Helper function to print the status of the character's inventory
void printInventoryStatus(Character& character) {
    std::cout << character.getName() << "'s Inventory:" << std::endl;
    for (int i = 0; i < 4; i++) {
        std::cout << "Slot " << i << ": ";
        AMateria* materia = character.getMateria(i);  // Assuming you have a getter for testing purposes
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
    source->learnMateria(new Ice());
    source->learnMateria(new Cure());

    // Create characters
    Character* me = new Character("Me");
    Character* bob = new Character("Bob");

    // Equip Materias
    AMateria* tmp;
    tmp = source->createMateria("ice");
    me->equip(tmp);
    tmp = source->createMateria("cure");
    me->equip(tmp);

    // Print inventory status
    printInventoryStatus(*me);

    // Use Materias
    me->use(0, *bob);
    me->use(1, *bob);

    // Unequip a Materia
    me->unequip(0);
    std::cout << "After unequipping slot 0:" << std::endl;
    printInventoryStatus(*me);

    // Create new Character and test deep copy
    Character* another = new Character(*me);
    std::cout << "Deep copy character:" << std::endl;
    printInventoryStatus(*another);

    // Cleanup
    delete me;
    delete bob;
    delete source;
    delete another;


    std::cout << "Tests completed." << std::endl;

    return 0;
}
