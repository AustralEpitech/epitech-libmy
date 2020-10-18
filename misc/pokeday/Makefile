##
## EPITECH PROJECT, 2020
## cpool10
## File description:
## Makefile
##

SRC		=	main.c						\
			display_pokemon_identity.c	\
			attack_rec.c				\
			change_pokemon_into_gamer.c	\
			attack.c					\
			struct_id.c					\
			ptr_on_fct.c

OBJ		=	$(SRC:.c=.o)

NAME	=	test


all:		$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L. -lmy

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:			fclean all