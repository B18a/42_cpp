/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:46:47 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 10:58:33 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i = 0;

	if(N <= 0)
		return(nullptr);
	Zombie* horde = new Zombie[N];
	if(!horde)
		return(nullptr);
	while(i < N)
	{
		horde[i].setName(name + "_" + std::to_string(i));
		i++;
	}
	return(horde);
}

