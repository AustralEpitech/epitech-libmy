##
## EPITECH PROJECT, 2021
## libmy
## File description:
## Makefile
##

CFLAGS	+=	-Wpedantic -Wall -Wextra -I../../include

SRC		=	my_compute.c	\
			my_nbr.c		\
			my_put.c		\
			my_str.c		\
			my_strcase.c	\
			my_str_is.c		\
			my_strstr.c		\
			my_strtok.c

OBJ		=	$(SRC:.c=.o)

NAME	=	../libmy.a

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ)
	$(AR) rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all
