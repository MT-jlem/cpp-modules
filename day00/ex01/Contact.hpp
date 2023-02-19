#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;

public:

	Contact();
	~Contact();
	
	void		SetFirstName();
	void		SetLastName();
	void		SetNickName();
	void		SetPhoneNumber();
	void		SetDarkestSecret();
	std::string GetFirstName();
	std::string	GetLastName();
	std::string	GetNickName();
	std::string	GetPhoneNumber();
	std::string	GetDarkestSecret();
};

#endif