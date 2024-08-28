/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:22:13 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 21:40:17 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
  public:
	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &cpy);
	WrongAnimal &operator=(const WrongAnimal &cpy);
	virtual ~WrongAnimal(void);

	virtual void		makeSound() const;
	std::string			getType() const;

  protected:
	std::string type;

};

#endif
