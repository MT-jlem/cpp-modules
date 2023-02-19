#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
    public:
        Brain();
        Brain(Brain const &obj);
        ~Brain();
        Brain   &operator=(const Brain &obj);

    private:
        std::string ideas[100];
};

#endif