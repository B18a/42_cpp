/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:53:15 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 14:12:06 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie	*zombieHorde(int N, std::string name)
{
	int	i;

	i = 0;
	if (N <= 0)
		return (NULL);
	Zombie *Horde = new Zombie[N]; // Allocate array on the heap
	while (i < N)
	{
		Horde[i].add_brain(name + std::to_string(i));
		i++;
	}
	return (Horde);
}
