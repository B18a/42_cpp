/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:28:05 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/30 15:09:34 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ClapTrap.hpp"
#include"../include/ScavTrap.hpp"
#include"../include/FragTrap.hpp"
#include"../include/DiamondTrap.hpp"

#include <iostream>

int main( void )
{

	DiamondTrap diamondtrap("Superman");

	diamondtrap.printStatus();
	diamondtrap.attack("Joker");
	diamondtrap.printStatus();
	diamondtrap.whoAmI();

	return 0;
}
