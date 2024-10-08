/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:53:43 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/16 11:22:49 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
# define PhoneBook_HPP

# include "Contact.hpp"
# define MAX_INDEX 8

class PhoneBook
{
  private:
	int index;
	Contact contacs[MAX_INDEX];

  public:
	PhoneBook(void);
	~PhoneBook(void);

	std::string get_input_safe(std::string message);
	void search(void);
	void add(void);
	void add_test(void);
};

#endif
