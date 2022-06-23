NAME	= weapon

SRC		= main.cpp		HumanA.cpp		HumanB.cpp		Weapon.cpp

OBJ		= $(SRC:.cpp=.o)

HEADR	= HumanA.hpp	HumanB.hpp		Weapon.hpp

CC		= clang++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

all		: $(NAME)

$(NAME)	: $(OBJ) $(HEADR)
		$(CC) $(CFAGS) $(OBJ) -o $(NAME)

.cpp.o	:
		$(CC) $(CFLAGS) -c $< -o $@

clean	:
		rm -f $(OBJ)

fclean	: clean
		rm -f $(NAME)

re		: fclean all

.PHONY	: clean fclean re all