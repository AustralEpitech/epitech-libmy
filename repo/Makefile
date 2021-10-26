##
## EPITECH PROJECT, 2021
## %%PROJ%%
## File description:
## Makefile
##

SHELL	=	/bin/bash

LIB_DIR	=	lib
LDFLAGS	=	-L$(LIB_DIR)
LDLIBS	=	-lmy
CFLAGS	+=	-Wpedantic -Wall -Wextra -Iinclude
TFLAGS	=	-lm -lcriterion --coverage

MAKELIB	=	$(MAKE) -C $(LIB_DIR)/my

SRC		=	src/%%PROJ%%.c

TESTS	=	tests/test_%%PROJ%%.c

TESTS	+=	tests/lib/test_my_compute_power_rec.c	\
			tests/lib/test_my_compute_square_root.c	\
			tests/lib/test_my_getnbr.c				\
			tests/lib/test_my_is_prime.c			\
			tests/lib/test_my_printf.c				\
			tests/lib/test_my_revstr.c				\
			tests/lib/test_my_strcat.c				\
			tests/lib/test_my_strcmp.c				\
			tests/lib/test_my_strdup.c				\
			tests/lib/test_my_str_isalpha.c			\
			tests/lib/test_my_str_islower.c			\
			tests/lib/test_my_str_isnum.c			\
			tests/lib/test_my_str_isprintable.c		\
			tests/lib/test_my_str_isupper.c			\
			tests/lib/test_my_strlen.c				\
			tests/lib/test_my_strlowcase.c			\
			tests/lib/test_my_strstr.c				\
			tests/lib/test_my_strtok.c				\
			tests/lib/test_my_strupcase.c

MAIN	=	src/main.o
OBJ		=	$(SRC:.c=.o)
TOBJ	=	$(TESTS:.c=.o)

NAME	=	%%PROJ%%

TNAME	=	tests/unit_test

.PHONY:		all lib clean fclean re tests_run

all:		$(NAME)

lib:
	$(MAKELIB)

$(NAME):	lib $(MAIN) $(OBJ)
	$(CC) -o $(NAME) $(MAIN) $(OBJ) $(LDFLAGS) $(LDLIBS)

clean:
	$(RM) $(MAIN) $(OBJ) $(TOBJ) tests/*.gc*
	$(MAKELIB) clean

fclean:		clean
	$(RM) $(NAME) $(TNAME)
	$(MAKELIB) fclean

re:			fclean all

tests_run:	fclean lib $(OBJ) $(TOBJ)
	$(CC) -o $(TNAME) $(TOBJ) $(OBJ) $(LDFLAGS) $(LDLIBS) $(TFLAGS)
	tests/unit_test
