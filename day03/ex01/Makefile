CC = c++

CXXFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -std=c++98

SRC = ClapTrap.cpp ScavTrap.cpp main.cpp 

OBJ = $(SRC:.cpp=.o)

NAME = ClapTrap

HEADERS = ClapTrap.hpp ScavTrap.hpp

all :$(NAME)

$(NAME) :$(HEADERS) $(OBJ) 
	$(CC) $(CXXFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	-rm *.o

fclean : clean
	-rm $(NAME)

re : fclean all
