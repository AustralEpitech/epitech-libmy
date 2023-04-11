##
## EPITECH PROJECT, 2023
## libmy
## File description:
## Makefile (my_string)
##

CFLAGS	+=	-I../../include -MMD

SRC		:=	foreach.c				\
			match.c					\
			my_arrlen.c				\
			my_arrnlen.c			\
			my_memcmp.c				\
			my_memcpy.c				\
			my_memset.c				\
			my_revstr.c				\
			my_strcat.c				\
			my_strchr.c				\
			my_strcmp.c				\
			my_strcpy.c				\
			my_strcspn.c			\
			my_strdup.c				\
			my_strerror.c			\
			my_strlen.c				\
			my_strncat.c			\
			my_strncmp.c			\
			my_strncpy.c			\
			my_strndup.c			\
			my_strnlen.c			\
			my_strrchr.c			\
			my_strspn.c				\
			my_strstr.c				\
			my_strtok.c				\
			my_strtok_r.c			\
			my_str_to_word_array.c

OBJ		:=	$(SRC:.c=.o)
DEP	:=	$(SRC:.c=.d)

NAME	:=	../libmy_string.a

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
