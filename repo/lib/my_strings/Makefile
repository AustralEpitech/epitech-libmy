##
## EPITECH PROJECT, 2021
## libmy
## File description:
## Makefile (my_strings)
##

CFLAGS	+=	-Wpedantic -Wall -Wextra -I../../include

SRC		=	my_strcasecmp.c		\
			my_strncasecmp.c

OBJ		=	$(SRC:.c=.o)

NAME	=	../libmy_strings.a

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ)
	$(AR) rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all
