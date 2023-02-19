CC = c++

CXXFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -std=c++98

SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Zombie

HEADERS = Zombie.hpp

all :$(NAME)

$(NAME) : $(OBJ) $(HEADERS)
	$(CC) $(CXXFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	-rm *.o

fclean : clean
	-rm $(NAME)

re : fclean all