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

int	main(void)
{
/****************************************************/
/*					VIRTUAL							*/
/****************************************************/

	const Animal* dog = new Dog();
	dog->makeSound();
//	std::cout << dog->getType() << std::endl;
	delete dog;

//	const Animal* cat = new Cat();
//	cat->makeSound();
//	delete cat;

/****************************************************/
/*					NON VIRTUAL						*/
/****************************************************/

	std::cout << std::endl;

	const WrongAnimal* wrongcat = new WrongCat();

	wrongcat->makeSound();

	delete wrongcat;

	return (0);
}
