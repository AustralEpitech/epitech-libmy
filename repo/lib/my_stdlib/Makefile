##
## EPITECH PROJECT, 2023
## libmy
## File description:
## Makefile (my_stdlib)
##

CFLAGS	+=	-I../../include -MMD

SRC		:=	my_atoi.c	\
			my_calloc.c	\
			my_strtol.c

OBJ		:=	$(SRC:.c=.o)
DEPENDS	:=	$(SRC:.c=.d)

NAME	:=	../libmy_stdlib.a

all:		$(NAME)

$(NAME):	$(OBJ)
	$(AR) rc $@ $(OBJ)

clean:
	$(RM) $(OBJ) $(DEPENDS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean
	$(MAKE)

.PHONY:		all clean fclean re
-include $(DEPENDS)
