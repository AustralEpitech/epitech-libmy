##
## EPITECH PROJECT, 2021
## libmy
## File description:
## Makefile (my_stdio)
##

CFLAGS	+=	-Wpedantic -Wall -Wextra -I../../include

SRC		=	my_fprintf.c		\
			my_fputc.c			\
			my_fputnbr_base.c	\
			my_fputnbr.c     	\
			my_fputs.c       	\
			my_printf.c      	\
			my_putchar.c     	\
			my_putnbr_base.c 	\
			my_putnbr.c      	\
			my_puts.c        	\
			my_vfprintf.c

OBJ		=	$(SRC:.c=.o)

NAME	=	../libmy_stdio.a

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ)
	$(AR) rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all
