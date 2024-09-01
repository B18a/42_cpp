/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:51:39 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 10:58:24 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include"WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
  public:
	WrongCat(void);
	WrongCat(const WrongCat &cpy);
	WrongCat &operator=(const WrongCat &cpy);
	~WrongCat(void);

	void makeSound() const; 

  protected:
	
};


#endif
