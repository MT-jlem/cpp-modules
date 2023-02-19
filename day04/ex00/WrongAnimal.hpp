#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal{

    public:

        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &obj);
        WrongAnimal  &operator=(const WrongAnimal &obj);
        ~WrongAnimal();

        void    makeSound(void) const;
        std::string getType() const;

    protected:
        std::string _type;
};

#endif 