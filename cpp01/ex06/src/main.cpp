/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:50:40 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 11:50:52 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"
#include <iostream>

int	main(int argc, char** argv)
{
	if (argc == 2)
	{
		Harl karen;
		karen.complain((std::string)(argv[1]));
	}
	return (0);
}
