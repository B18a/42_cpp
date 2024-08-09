/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:17:29 by ajehle            #+#    #+#             */
/*   Updated: 2024/08/09 10:29:50 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
 # define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string number;
	std::string secret;
public:
	Contact(void);
	Contact(std::string first_name, std::string last_name, std::string nick_name, std::string number, std::string secret);
	~Contact(void);

	void setContact(std::string new_first_name, std::string new_last_name, std::string new_nick_name, std::string new_number, std::string new_secret);
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickName(void);

	void	printContact(void);
};

#endif
