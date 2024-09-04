/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:28:05 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/30 09:49:50 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main( void )
{
	ScavTrap scavtrap("Joker");

	scavtrap.printStatus();
	scavtrap.attack("Batman");
	scavtrap.guardGate();

	return 0;
}
