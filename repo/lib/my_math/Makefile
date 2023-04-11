##
## EPITECH PROJECT, 2023
## libmy
## File description:
## Makefile (my_math)
##

CFLAGS	+=	-I../../include -MMD

SRC		:=	my_pow.c

OBJ		:=	$(SRC:.c=.o)
DEP	:=	$(SRC:.c=.d)

NAME	:=	../libmy_math.a

all:		$(NAME)

$(NAME):	$(OBJ)
	$(AR) rc $@ $(OBJ)

clean:
	$(RM) $(OBJ) $(DEP)

fclean:		clean
	$(RM) $(NAME)

re:			fclean
	$(MAKE)

.PHONY:		all clean fclean re
-include $(DEP)
