##
## EPITECH PROJECT, 2021
## %%PROJ%%
## File description:
## Makefile
##

SHELL	=	/bin/bash

LIB_DIR	=	lib/my
LDFLAGS	=	-L$(LIB_DIR)/..
LDLIBS	=	-lmy
CFLAGS	+=	-W -Wall -Iinclude

SRC		=	src/%%PROJ%%.c

MAIN	=	src/main.o
OBJ		=	$(SRC:.c=.o)

NAME	=	%%PROJ%%

TFLAGS	=	-lcriterion --coverage

TESTS	=	tests/test_%%PROJ%%.c

TOBJ	=	$(TESTS:.c=.o)

TNAME	=	tests/unit_test

.PHONY:		all clean fclean re tests_run debug

all:		$(NAME)

$(NAME):	$(MAIN) $(OBJ)
	$(MAKE) -C $(LIB_DIR)
	$(CC) -o $(NAME) $(MAIN) $(OBJ) $(LDFLAGS) $(LDLIBS)

clean:
	$(RM) $(MAIN) $(OBJ) $(TOBJ) tests/*.gc*
	$(MAKE) -C $(LIB_DIR) clean

fclean:		clean
	$(RM) $(NAME) $(TNAME)
	$(MAKE) -C $(LIB_DIR) fclean

re:			fclean all

tests_run:	fclean $(OBJ) $(TOBJ)
	$(MAKE) -C $(LIB_DIR)
	$(CC) -o $(TNAME) $(TOBJ) $(OBJ) $(LDFLAGS) $(LDLIBS) $(TFLAGS)
	tests/unit_test

debug:		fclean
	CFLAGS=-g3 $(MAKE)