/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:51:39 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/23 10:58:24 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
  public:
	Brain(void);
	Brain(const Brain& cpy);
	Brain& operator=(const Brain& cpy);
	~Brain(void);

  private:
	std::string ideas[100];
};


#endif
