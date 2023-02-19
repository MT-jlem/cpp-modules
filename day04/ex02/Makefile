CC = c++

CXXFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -std=c++98

SRC = main.cpp Cat.cpp Dog.cpp Animal.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Animal

HEADERS = Animal.hpp Cat.hpp Dog.hpp Brain.hpp

all :$(NAME)

$(NAME) :$(HEADERS) $(OBJ) 
	$(CC) $(CXXFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	-rm *.o

fclean : clean
	-rm $(NAME)

re : fclean all
