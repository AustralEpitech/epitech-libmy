##
## EPITECH PROJECT, 2023
## libmy
## File description:
## Makefile (my_stdio)
##

CFLAGS	+=	-I../../include -MMD

SRC		:=	my_fprintf.c	\
			my_fputc.c		\
			my_fputs.c		\
			my_printf.c		\
			my_putchar.c	\
			my_puts.c		\
			my_vfprintf.c

OBJ		:=	$(SRC:.c=.o)
DEP	:=	$(SRC:.c=.d)

NAME	:=	../libmy_stdio.a

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
