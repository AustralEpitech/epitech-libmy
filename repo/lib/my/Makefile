##
## EPITECH PROJECT, 2021
## libmy
## File description:
## Makefile
##

CFLAGS	=	-I../../include

SRC		=	my_compute.c			\
			my_nbr.c				\
			my_put.c				\
			my_str_is.c				\
			my_str_to_word_array.c	\
			my_str.c				\
			my_strcase.c			\
			my_strstr.c

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