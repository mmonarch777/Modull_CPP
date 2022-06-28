NAME	= program

SRC		=	main.cpp\
			Bureaucrat.cpp\
			Form.cpp\
			PresidentialPardonForm.cpp\
			ShrubberyCreationForm.cpp\
			RobotomyRequestForm.cpp\
			Intern.cpp

OBJ		= $(SRC:.cpp=.o)

HEADR	=	Bureaucrat.hpp\
			Form.hpp\
			PresidentialPardonForm.hpp\
			ShrubberyCreationForm.hpp\
			RobotomyRequestForm.hpp\
			Intern.hpp

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

all		: $(NAME)

$(NAME)	: $(OBJ) $(HEADR)
		$(CC) $(CFAGS) $(OBJ) -o $(NAME)

.cpp.o	: $(HEADR)
		$(CC) $(CFLAGS) -c $< -o $@

clean	:
		rm -f $(OBJ)

fclean	: clean
		rm -f $(NAME)

re		: fclean all

.PHONY	: clean fclean re all