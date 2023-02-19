#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(): i(-1)
{
}

PhoneBook::~PhoneBook()
{}

void    PhoneBook::Add()
{
    this->i++;
    while (1)
    {
        std::string tmp;
        std::cout << "enter first name : ";
        this->arr[this->i % 8].SetFirstName();
        if (std::cin.eof()) exit(1);
        tmp = this->arr[this->i % 8].GetFirstName();
        if (!tmp.empty())
            break;
        std::cout << "\ninvalid input,try again\n";
    }
    while (1)
    {
        std::string tmp;
        std::cout << "enter last name : ";
        this->arr[this->i % 8].SetLastName();
        if (std::cin.eof()) exit(1);
        tmp = this->arr[this->i % 8].GetLastName();
        if (!tmp.empty())
            break;
        std::cout << "\n invalid input,try again\n";
    }
    while (1)
    {
        std::string tmp;
        std::cout << "enter nickname :";
        this->arr[this->i % 8].SetNickName();
        if (std::cin.eof()) exit(1);
        tmp = this->arr[this->i % 8].GetNickName();
        if (!tmp.empty())
            break;
        std::cout << "\n invalid input,try again\n";
    }
    while (1)
    {
        std::string tmp;
        std::cout << "enter phone number :";
        this->arr[this->i % 8].SetPhoneNumber();
        if (std::cin.eof()) exit(1);
        tmp = this->arr[this->i % 8].GetPhoneNumber();
        if (!tmp.empty())
            break;
        std::cout << "\n invalid input,try again\n";
    }
    while (1)
    {
        std::string tmp;
        std::cout << "enter darkest secret :";
        this->arr[this->i % 8].SetDarkestSecret();
        if (std::cin.eof()) exit(1);
        tmp = this->arr[this->i % 8].GetDarkestSecret();
        if (!tmp.empty())
            break;
        std::cout << "\n invalid input,try again\n";
    }
}

void    PhoneBook::Display()
{
    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "first name" << "|";
    std::cout << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nickname" << "|\n";
    for (int j = 0; j <= this->i && j < 8; j++)
    {
        std::string tmp;
        std::cout << std::setw(10) << j << "|";
        tmp = this->arr[j].GetFirstName();
        if (tmp.length() > 10)
            std::cout << tmp.substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << tmp << "|";
        tmp.clear();
        tmp =  this->arr[j].GetLastName();
        if (tmp.length() > 10)
            std::cout << tmp.substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << tmp << "|";
        tmp.clear();
        tmp = this->arr[j].GetNickName();
        if (tmp.length() > 10)
            std::cout << tmp.substr(0, 9) << ".|\n";
        else
            std::cout << std::setw(10) << tmp << "|\n";
    }
}

void    PhoneBook::Search(int in)
{
    if (in < 8 && in >= 0 && in <= this->i)
    {
        std::cout << "First name : " << this->arr[in].GetFirstName() << std::endl;
        std::cout << "Last name : " << this->arr[in].GetLastName() << std::endl;
        std::cout << "Nickname : " << this->arr[in].GetNickName() << std::endl;
        std::cout << "Phone number : " << this->arr[in].GetPhoneNumber() << std::endl;
        std::cout << "Darkest secret : " << this->arr[in].GetDarkestSecret() << std::endl;
    }
    else
    {
        std::cout << "out of range, try again\n";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
}