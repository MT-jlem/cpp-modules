CC = c++

CXXFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -std=c++98

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = main

HEADERS =

all :$(NAME)

$(NAME) :$(HEADERS) $(OBJ) 
	$(CC) $(CXXFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	-rm *.o

fclean : clean
	-rm $(NAME)

re : fclean all
