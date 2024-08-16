/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:22:13 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 21:58:31 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP


# include <iostream>
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
  public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &cpy);				// copy constuctor
	FragTrap &operator=(const FragTrap &cpy);	// copy assignment operator
	~FragTrap(void);

	void highFivesGuys(void);

  private:

};

#endif
