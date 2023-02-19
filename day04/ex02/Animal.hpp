#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal{

    public:

        Animal();
        Animal(std::string type);
        Animal(const Animal &obj);
        Animal  &operator=(const Animal &obj);
        virtual ~Animal();

        virtual void    makeSound(void) const = 0;
        std::string getType() const;

    protected:
        std::string _type;
};

#endif 