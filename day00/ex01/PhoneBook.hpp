#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
public:
	Contact arr[8];
	int		i;
	PhoneBook();
	~PhoneBook();

	void	Add();
	void	Search(int  in);
	void	Exit();
	void	Display();
};

#endif