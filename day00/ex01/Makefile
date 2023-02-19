CC = c++

CXXFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -std=c++98

SRC = PhoneBook.cpp Contact.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = PhoneBook

all :$(NAME)

$(NAME) : $(OBJ) PhoneBook.hpp Contact.hpp
	$(CC) $(CXXFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	-rm *.o

fclean : clean
	-rm $(NAME)

re : fclean all