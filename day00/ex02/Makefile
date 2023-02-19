CC = c++

CXXFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -std=c++98

SRC = Account.cpp tests.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Account

all :$(NAME)

$(NAME) : $(OBJ) Account.hpp
	$(CC) $(CXXFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	-rm *.o

fclean : clean
	-rm $(NAME)

re : fclean all