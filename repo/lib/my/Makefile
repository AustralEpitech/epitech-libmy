##
## EPITECH PROJECT, 2021
## libmy
## File description:
## Makefile
##

CFLAGS	+=	-Wpedantic -Wall -Wextra -I../../include

SRC		=	my_atoi.c			\
			my_fprintf.c		\
			my_fputc.c			\
			my_fputnbr.c		\
			my_fputnbr_base.c	\
			my_fputs.c			\
			my_memcpy.c			\
			my_memset.c			\
			my_pow.c			\
			my_printf.c			\
			my_putchar.c		\
			my_putnbr.c			\
			my_putnbr_base.c	\
			my_puts.c			\
			my_revstr.c			\
			my_sqrt.c			\
			my_strcat.c			\
			my_strchr.c			\
			my_strcmp.c			\
			my_strcpy.c			\
			my_strcspn.c		\
			my_strdup.c			\
			my_strlen.c			\
			my_strncat.c		\
			my_strncmp.c		\
			my_strncpy.c		\
			my_strndup.c		\
			my_strnlen.c		\
			my_strspn.c			\
			my_strstr.c			\
			my_strtok.c			\
			my_strtok_r.c		\
			my_vfprintf.c

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
