CC = c++

CXXFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -std=c++98

SRC = AForm.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp main.cpp Intern.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Bureaucrat

HEADERS = AForm.hpp Bureaucrat.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp \
		ShrubberyCreationForm.hpp Intern.hpp

all :$(NAME)

$(NAME) :$(HEADERS) $(OBJ) 
	$(CC) $(CXXFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	-rm *.o

fclean : clean
	-rm $(NAME) *_shrubbery

re : fclean all
