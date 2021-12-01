##
## EPITECH PROJECT, 2021
## libmy
## File description:
## Makefile (my_stdlib)
##

CFLAGS	+=	-Wpedantic -Wall -Wextra -I../../include

SRC		=	my_atoi.c

OBJ		=	$(SRC:.c=.o)

NAME	=	../libmy_stdlib.a

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ)
	$(AR) rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all
