

#ifndef CONTACT_H
 # define CONTACT_H

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		int		index;
		char*	first_name;
		char*	last_name;
		char*	nick_name;
		int		number;
		char*	secret;
};

#endif