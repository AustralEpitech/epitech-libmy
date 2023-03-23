##
## EPITECH PROJECT, 2023
## libmy
## File description:
## Makefile (my_strings)
##

CFLAGS	+=	-I../../include -MMD

SRC		:=	my_strcasecmp.c		\
			my_strncasecmp.c

OBJ		:=	$(SRC:.c=.o)
DEPENDS	:=	$(SRC:.c=.d)

NAME	:=	../libmy_strings.a

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
