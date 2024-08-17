/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:22:13 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/17 12:54:29 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
  public:
	WrongCat(void);
	WrongCat(const WrongCat &cpy);
	WrongCat &operator=(const WrongCat &cpy);
	~WrongCat(void);

	void	makeSound() const;
	// void	makeSound() const override; //C++11
  protected:

};

#endif
