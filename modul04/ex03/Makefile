NAME	= program

SRC		=	main.cpp\
			AMateria.cpp\
			Character.cpp\
			Cure.cpp\
			Ice.cpp\
			MateriaSource.cpp


OBJ		= $(SRC:.cpp=.o)

HEADR	=	AMateria.hpp\
			Character.hpp\
			Cure.hpp\
			Ice.hpp\
			ICharacter.hpp\
			IMateriaSource.hpp\
			MateriaSource.hpp

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