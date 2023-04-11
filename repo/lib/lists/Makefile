##
## EPITECH PROJECT, 2023
## myteams
## File description:
## Makefile
##

CFLAGS	+=	-Wall -Wextra -Wpedantic -I../../include -MMD

SRC		:=	at.c		\
			back.c		\
			clear.c		\
			empty.c		\
			erase.c		\
			front.c		\
			insert.c	\
			merge.c		\
			pop_back.c	\
			pop_front.c	\
			push_back.c	\
			size.c		\

OBJ		:=	$(SRC:.c=.o)
DEP		:=	$(SRC:.c=.d)

NAME	:=	../liblists.a

all:		$(NAME)

$(NAME):	$(OBJ)
	$(AR) rc $@ $(OBJ)

clean:
	$(RM) $(OBJ) $(DEP)

fclean:		clean
	$(RM) $(NAME)

.PHONY:		all clean fclean
-include $(DEP)
