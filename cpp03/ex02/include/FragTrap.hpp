/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:27:43 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/30 15:24:13 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include"ClapTrap.hpp"

#include <iostream>

class FragTrap : public ClapTrap
{
  public:
	FragTrap(void);
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap(const FragTrap& orig);
	FragTrap& operator=(const FragTrap& orig);

	void highFivesGuys(void);
};

#endif
