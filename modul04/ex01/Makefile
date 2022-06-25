NAME	= program

SRC		=	main.cpp\
 			Animal.cpp\
 			Cat.cpp\
 			Dog.cpp\
 			WrongAnimal.cpp\
 			WrongCat.cpp

OBJ		= $(SRC:.cpp=.o)

HEADR	=	Animal.hpp\
			Dog.hpp\
			Cat.hpp\
			WrongAnimal.hpp\
			WrongCat.hpp

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