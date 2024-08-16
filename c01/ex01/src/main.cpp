/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:52:25 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 14:11:11 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	int	i;
	int	N;
	Zombie	*heapZ;

	N = 10;
	heapZ = zombieHorde(N, "Horde");
	i = 0;
	while(i < N)
	{
		heapZ[i].announce();
		i++;
	}
	delete[] heapZ;
}
