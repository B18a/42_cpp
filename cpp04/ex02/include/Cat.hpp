/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:22:13 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 21:40:17 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Aanimal.hpp"
# include "Brain.hpp"

class Cat : virtual public Aanimal
{
  public:
	Cat(void);
	Cat(const Cat &cpy);
	Cat& operator=(const Cat &cpy);
	~Cat(void);

	void	makeSound() const;
	// void	makeSound() const override; //C++11
  protected:
  
  private:
	Brain* brain;

};

#endif
