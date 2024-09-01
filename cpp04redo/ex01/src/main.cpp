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

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include <iostream>

// how to call the copy constructor
// Fixed obj1;
// Fixed obj2 = obj1;

// how to call the copy assignment operator
// Fixed obj1;
// Fixed obj2;
// obj1 = opj2;

int	main(void)
{

/*
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;

return 0;
*/
/**/
	const Animal* dog = new Dog();
	std::cout << std::endl;
	delete dog;
/*
	Animal* mix[10];
	for(int i = 0; i < 10; ++i)
	{
		if(i % 2)
		{
			mix[i] = new Dog();
		}
		else
		{
			mix[i] = new Cat();
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for(int i = 0; i < 10; ++i)
	{
		delete mix[i];
		std::cout << std::endl;
	}
*/
}

