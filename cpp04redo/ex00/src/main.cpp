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

	Animal* dog = new Dog();
//	Animal* cat = new Cat();

	dog->makeSound();
//	cat->makeSound();

	delete dog;
//	delete cat;


/****************************************************/
/*					NON VIRTUAL						*/
/****************************************************/

	std::cout << std::endl;

	WrongAnimal* wrongcat = new WrongCat();

	wrongcat->makeSound();

	delete wrongcat;

	return (0);
}
