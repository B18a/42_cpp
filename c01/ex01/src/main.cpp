/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:50:40 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 11:51:46 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include <iostream>

int	main(void)
{
	int	i;
	int	N;
	Zombie* heapZ = nullptr;

	N = 5;
	heapZ = zombieHorde(N, "Horde");
	i = 0;
	if(heapZ)
	{
		while(i < N)
		{
			heapZ[i].announce();
			i++;
		}
		delete[] heapZ;
	}
	return (0);
}
