CC = c++

CXXFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow

CPPFLAGS = -std=c++98

SRC = ClapTrap.cpp ScavTrap.cpp main.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)

NAME = ClapTrap

HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

all :$(NAME)

$(NAME) :$(HEADERS) $(OBJ) 
	$(CC) $(CXXFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	-rm *.o

fclean : clean
	-rm $(NAME)

re : fclean all
