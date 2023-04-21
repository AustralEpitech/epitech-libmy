##
## EPITECH PROJECT, 2023
## myteams
## File description:
## Makefile
##

CFLAGS	:=	-Wall -Wextra -Wpedantic -I../include -MMD

SRC		:=	error/my_error.c			\
			file/readfile.c				\
			math/my_pow.c				\
			stdio/my_fprintf.c			\
			stdio/my_fputc.c			\
			stdio/my_fputs.c			\
			stdio/my_printf.c			\
			stdio/my_putchar.c			\
			stdio/my_puts.c				\
			stdio/my_vfprintf.c			\
			stdlib/my_atoi.c			\
			stdlib/my_calloc.c			\
			stdlib/my_strtol.c			\
			string/foreach.c			\
			string/match.c				\
			string/my_arrlen.c			\
			string/my_arrnlen.c			\
			string/my_memccpy.c			\
			string/my_memchr.c			\
			string/my_memcmp.c			\
			string/my_memcpy.c			\
			string/my_mempcpy.c			\
			string/my_memrchr.c			\
			string/my_memset.c			\
			string/my_revstr.c			\
			string/my_stpcpy.c			\
			string/my_stpncpy.c			\
			string/my_strcat.c			\
			string/my_strchr.c			\
			string/my_strcmp.c			\
			string/my_strcpy.c			\
			string/my_strcspn.c			\
			string/my_strdup.c			\
			string/my_strerror.c		\
			string/my_strlen.c			\
			string/my_strncat.c			\
			string/my_strncmp.c			\
			string/my_strncpy.c			\
			string/my_strndup.c			\
			string/my_strnlen.c			\
			string/my_strrchr.c			\
			string/my_strspn.c			\
			string/my_strstr.c			\
			string/my_strtok.c			\
			string/my_strtok_r.c		\
			string/split.c				\
			strings/my_strcasecmp.c		\
			strings/my_strncasecmp.c	\

OBJ		:=	$(SRC:.c=.o)
DEP		:=	$(SRC:.c=.d)

NAME	:=	libmy.a

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
