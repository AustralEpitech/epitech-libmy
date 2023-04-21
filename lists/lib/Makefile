##
## EPITECH PROJECT, 2023
## myteams
## File description:
## Makefile
##

CFLAGS	:=	-Wall -Wextra -Wpedantic -I../include -MMD

SRC		:=	lists/at.c			\
			lists/back.c		\
			lists/clear.c		\
			lists/copy.c		\
			lists/empty.c		\
			lists/erase.c		\
			lists/erase_if.c	\
			lists/foreach.c		\
			lists/foreach_r.c	\
			lists/front.c		\
			lists/insert.c		\
			lists/merge.c		\
			lists/pop_back.c	\
			lists/pop_front.c	\
			lists/push_back.c	\
			lists/push_front.c	\
			lists/size.c		\

OBJ		:=	$(SRC:.c=.o)
DEP		:=	$(SRC:.c=.d)

NAME	:=	liblists.a

all:		$(NAME)

$(NAME):	$(OBJ)
	$(AR) rc $@ $(OBJ)

clean:
	$(RM) $(OBJ) $(DEP)

fclean:		clean
	$(RM) $(NAME)

re:			fclean
	$(MAKE)

debug:		fclean
	CFLAGS=-g3 $(MAKE)

.PHONY:		all clean fclean re debug
-include $(DEP)
