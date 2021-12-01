##
## EPITECH PROJECT, 2021
## libmy
## File description:
## Makefile (my_error)
##

CFLAGS	+=	-Wpedantic -Wall -Wextra -I../../include

SRC		=	my_error.c

OBJ		=	$(SRC:.c=.o)

NAME	=	../libmy_error.a

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ)
	$(AR) rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all
