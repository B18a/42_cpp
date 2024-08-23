/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:33:11 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/22 09:59:16 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# define LVL 4
# include <iostream>

class Harl
{
  public:
	Harl(void);
	~Harl(void);

	void complain( std::string level );
  private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

#endif
