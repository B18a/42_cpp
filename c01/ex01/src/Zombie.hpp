/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:53:03 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 14:05:23 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
  public:
	Zombie(void);
	~Zombie(void);
	void announce(void);
	void add_brain(std::string name);

  private:
	std::string name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
