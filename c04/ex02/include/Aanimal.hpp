/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:22:13 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 21:40:17 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
To make a class non-instantiable in C++, you typically declare it as an abstract class by including at least one pure virtual function.
A pure virtual function is a function that has no implementation in the base class and must be overridden by any derived class.
 This is done by setting the function equal to 0 in the class declaration.
*/

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class Aanimal
{
  public:
	Aanimal(void);
	Aanimal(std::string type);
	Aanimal(const Aanimal& cpy);
	Aanimal& operator=(const Aanimal& cpy);
	virtual ~Aanimal(void);

	virtual void		makeSound() const = 0;
	std::string			getType() const;

  protected:
	std::string type;

};

#endif
