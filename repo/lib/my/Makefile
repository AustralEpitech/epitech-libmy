##
## EPITECH PROJECT, 2021
## libmy
## File description:
## Makefile
##

CPPFLAGS	=	-I../../include

SRC			=	my_compute.c			\
				my_nbr.c				\
				my_put.c				\
				my_str_is.c				\
				my_str_to_word_array.c	\
				my_str.c				\
				my_strcase.c			\
				my_strstr.c

OBJ			=	$(SRC:.c=.o)

NAME		=	../libmy.a

all:			$(NAME)

$(NAME):		$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:			clean
	rm -f $(NAME)

re:				fclean all