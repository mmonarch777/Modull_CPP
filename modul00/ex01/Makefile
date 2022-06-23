NAME	= phonebook

SRC		= main.cpp		PhoneBook.cpp		Contact.cpp

OBJ		= $(SRC:.cpp=.o)

HEADR	= Contact.hpp	PhoneBook.hpp

CC		= clang++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

all		: $(NAME)

$(NAME)	: $(OBJ) $(HEADR)
		$(CC) $(CFAGS) $(OBJ) -o $(NAME)

.cpp.o	:
		$(CC) $(CFLAGS) -c $< -o $@

clean	:
		rm -rf $(OBJ)

fclean	: clean
		rm -rf $(NAME)

re		: fclean all

.PHONY	: clean fclean re all