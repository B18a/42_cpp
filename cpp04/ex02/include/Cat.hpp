/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:51:39 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 10:58:24 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include"Animal.hpp"
#include"Brain.hpp"

class Cat : public Animal
{
  public:
	Cat(void);
	Cat(const Cat& cpy);
	Cat& operator=(const Cat& cpy);
	~Cat(void);

	void makeSound() const override; 

  private:
	Brain* brain;
	
};


#endif
