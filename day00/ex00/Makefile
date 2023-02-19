CC = c++

CXXFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

NAME = megaphone

all :$(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CXXFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	-rm *.o

fclean : clean
	-rm megaphone

re : fclean all