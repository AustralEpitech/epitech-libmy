##
## EPITECH PROJECT, 2020
## infinadd
## File description:
## Makefile
##

CFLAGS	=	-Iinclude -Llib -lmy

SRC		=	infinadd.c		\
			operations.c	\
			tools.c

OBJ		=	$(SRC:.c=.o)

NAME	=	infin_add

all:		$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my && make -C lib/my fclean
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:			fclean all

auteur:
	echo $(USER) > auteur