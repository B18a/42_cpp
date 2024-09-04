/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:50:40 by ajehle            #+#    #+#             */
/*   Updated: 2024/09/04 14:04:36 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/Character.hpp"
#include "../include/ICharacter.hpp"

#include <iostream>

int	main(void)
{

AMateria* ice = new Ice();
// const AMateria* cure = new Cure();

// std::cout << "\nCLONING" << std::endl;

// AMateria* ice2 = ice->clone();
// AMateria* cure2 = cure->clone();

// std::cout << "CLONING done\n" << std::endl;

ICharacter* batman = new Character("Batman");
ICharacter* joker = new Character("Joker");

batman->equip(ice);
// batman->use(0, *joker);

// delete ice;
// delete cure;
// delete cure2;
delete batman;
delete joker;

}
