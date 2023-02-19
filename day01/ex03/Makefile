CC = c++

CXXFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -std=c++98

SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = main

HEADERS = HumanB.hpp Weapon.hpp HumanA.hpp

all :$(NAME)

$(NAME) : $(OBJ) $(HEADERS)
	$(CC) $(CXXFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	-rm *.o

fclean : clean
	-rm $(NAME)

re : fclean all