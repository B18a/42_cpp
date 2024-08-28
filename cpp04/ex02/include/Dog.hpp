/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:22:13 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 21:40:17 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Aanimal.hpp"
# include "Brain.hpp"

class Dog : virtual public Aanimal
{
  public:
	Dog(void);
	Dog(const Dog &cpy);
	Dog& operator=(const Dog &cpy);
	~Dog(void);

	void	makeSound() const;
	// void	makeSound() const override; //C++11

  protected:

  private:
	Brain* brain;

};

#endif
