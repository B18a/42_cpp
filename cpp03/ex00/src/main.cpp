/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:28:05 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/29 18:54:12 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/ClapTrap.hpp"

int main( void )
{
	ClapTrap claptrap("Batman");

	claptrap.printStatus();
	claptrap.beRepaired(5);
	claptrap.printStatus();
	claptrap.attack("Superman");
	claptrap.printStatus();
	claptrap.takeDamage(3);
	claptrap.printStatus();
	return 0;
}
