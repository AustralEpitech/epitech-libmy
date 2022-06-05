##
## EPITECH PROJECT, 2021
## libmy
## File description:
## Makefile (my_math)
##

CFLAGS	+=	-Wpedantic -Wall -Wextra -I../../include

SRC		=	my_pow.c

OBJ		=	$(SRC:.c=.o)

NAME	=	../libmy_math.a

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ)
	$(AR) rc $@ $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all
