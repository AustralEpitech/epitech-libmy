##
## EPITECH PROJECT, 2021
## %%PROJ%%
## File description:
## Makefile
##

SHELL	=	/bin/bash

LIB_DIR	=	lib
LDFLAGS	=	-L$(LIB_DIR) -lmy
CFLAGS	+=	-Wpedantic -Wall -Wextra -Iinclude

TFLAGS	=	--coverage
TLIBS	=	-lm -lcriterion

MAKELIB	=	$(MAKE) -C $(LIB_DIR)/my

SRC		=	src/%%PROJ%%.c

TESTS	=	tests/test_%%PROJ%%.c
TESTS	+=	tests/lib/test_my_atoi.c	\
			tests/lib/test_my_memcpy.c	\
			tests/lib/test_my_memset.c	\
			tests/lib/test_my_pow.c		\
			tests/lib/test_my_printf.c	\
			tests/lib/test_my_revstr.c	\
			tests/lib/test_my_sqrt.c	\
			tests/lib/test_my_strcat.c	\
			tests/lib/test_my_strchr.c	\
			tests/lib/test_my_strcmp.c	\
			tests/lib/test_my_strcpy.c	\
			tests/lib/test_my_strcspn.c	\
			tests/lib/test_my_strdup.c	\
			tests/lib/test_my_strlen.c	\
			tests/lib/test_my_strncat.c	\
			tests/lib/test_my_strncmp.c	\
			tests/lib/test_my_strncpy.c	\
			tests/lib/test_my_strndup.c	\
			tests/lib/test_my_strnlen.c	\
			tests/lib/test_my_strspn.c	\
			tests/lib/test_my_strstr.c	\
			tests/lib/test_my_strtok.c

MAIN	=	src/main.o
OBJ		=	$(SRC:.c=.o)
TOBJ	=	$(TESTS:.c=.o)

LIB		=	$(LIBDIR)/libmy.a
NAME	=	%%PROJ%%

TNAME	=	unit_test

.PHONY:		all clean fclean re tests_run

all:		$(LIB) $(NAME)

$(LIB):
	$(MAKELIB)

$(NAME):	$(MAIN) $(OBJ)
	$(CC) -o $(NAME) $(MAIN) $(OBJ) $(LDFLAGS)

clean:
	$(RM) $(MAIN) $(OBJ) $(TOBJ)
	find -name '*.gc*' -delete
	$(MAKELIB) clean

fclean:		clean
	$(RM) $(NAME) $(TNAME)
	$(MAKELIB) fclean

re:			fclean all

tests_run:	fclean $(LIB) $(SRC) $(TESTS)
	CFLAGS="$(TFLAGS)" $(MAKE) $(OBJ) $(TOBJ)
	$(CC) -o $(TNAME) $(OBJ) $(TOBJ) $(LDFLAGS) $(TLIBS) $(TFLAGS)
	./$(TNAME)
