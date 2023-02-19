CC = c++

CXXFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -std=c++98

SRC = Bureaucrat.cpp main.cpp Form.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Bureaucrat

HEADERS = Bureaucrat.hpp Form.hpp

all :$(NAME)

$(NAME) :$(HEADERS) $(OBJ) 
	$(CC) $(CXXFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	-rm *.o

fclean : clean
	-rm $(NAME)

re : fclean all
