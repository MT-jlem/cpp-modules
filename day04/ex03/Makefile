CC = c++

CXXFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -std=c++98

SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Materia

HEADERS = AMateria.hpp Character.hpp Cure.hpp ICharacter.hpp IMateriaSource.hpp \
			Ice.hpp MateriaSource.hpp

all :$(NAME)

$(NAME) :$(HEADERS) $(OBJ) 
	$(CC) $(CXXFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	-rm *.o

fclean : clean
	-rm $(NAME)

re : fclean all
