NAME	= megaphone

SRC		= megaphone.cpp

OBJ		= $(SRC:.cpp=.o)

CC		= clang++

CFLAGS	= -Wall -Wextra -Werror -std=c++98


all		: $(NAME)

.cpp.o		:
		$(CC) $(FLAGS) -c $< -o $@

$(NAME)	: $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)


clean	:
		rm -rf $(OBJ)

fclean	: clean
		rm  -rf $(NAME)

re		: fclean all

.PHONY	: all clean fclean re