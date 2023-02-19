CC = c++

CXXFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -std=c++98

SRC = Harl.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = main

HEADERS = Harl.hpp

all :$(NAME)

$(NAME) : $(OBJ) $(HEADERS)
	$(CC) $(CXXFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	-rm *.o

fclean : clean
	-rm $(NAME)

re : fclean all
