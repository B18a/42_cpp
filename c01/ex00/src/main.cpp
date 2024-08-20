/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:50:40 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 13:50:50 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie	*heapZ;

	std::cout << "  |                               |  " << std::endl;
	std::cout << "  v      Zombie on Stack START    v  " << std::endl;
	Zombie zombie1("Frank");
	Zombie zombie2("Herbert");
	std::cout << std::endl;
	randomChump("Kumar");
	std::cout << std::endl;
	std::cout << "  |                               |  " << std::endl;
	std::cout << "  v      Zombie on Heap START     v  " << std::endl;
	heapZ = newZombie("HeapZ");
	delete (heapZ);
	std::cout << "  ^                               ^  " << std::endl;
	std::cout << "  |      Zombie on Heap END       |  " << std::endl;
	std::cout << std::endl;

	std::cout << "  |                               |  " << std::endl;
	std::cout << "  v      Zombie on Stack END      v  " << std::endl;
}
