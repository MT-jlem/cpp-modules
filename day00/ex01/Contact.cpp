#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
}

Contact::~Contact()
{
}

void		Contact::SetFirstName()
{
    std::getline(std::cin, FirstName, '\n');
}

void		Contact::SetLastName(){
    std::getline(std::cin, LastName, '\n');
}

void		Contact::SetNickName(){
    std::getline(std::cin, NickName, '\n');
}

void		Contact::SetPhoneNumber(){
    std::getline(std::cin, PhoneNumber, '\n');
}

void		Contact::SetDarkestSecret(){
    std::getline(std::cin, DarkestSecret, '\n');
}

std::string Contact::GetFirstName()
{
    return FirstName;
}
std::string	Contact::GetLastName()
{
    return LastName;
}
std::string	Contact::GetNickName()
{
    return NickName;
}
std::string	Contact::GetPhoneNumber()
{
    return PhoneNumber;
}
std::string	Contact::GetDarkestSecret()
{
    return DarkestSecret;
}