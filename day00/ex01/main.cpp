#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <limits>

int main()
{
    PhoneBook PhoneBook;
    std::string str;
    while (1)
    {
        std::cout << "Enter one of the three commands,\"ADD\",\"SEARCH\",\"EXIT\" : ";
        if (!(std::getline(std::cin ,str)))
            break;
        if (str == "ADD")
            PhoneBook.Add();
        else if (str == "SEARCH")
        {
            PhoneBook.Display();
            std::cout << "Enter an index : ";
            int in;
            if (std::cin >> in)
                PhoneBook.Search(in);
            else
            {
                std::cout << "Invalid iput\n";
                std::cin.clear();
                std::cin.ignore(1000, '\n');
            }
        }
        else if (str == "EXIT")
            break;
        else
            std::cout << "Invalid input, try again\n";
    }
}
