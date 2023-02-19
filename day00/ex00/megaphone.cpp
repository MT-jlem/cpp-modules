#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        for(int i = 1; av[i]; i++)
            for(int j = 0; av[i][j]; j++)
                std::cout << static_cast<char>(toupper(av[i][j]));
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return 0;
}