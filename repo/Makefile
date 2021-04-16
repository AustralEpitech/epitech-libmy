##
## EPITECH PROJECT, 2021
## %%PROJ%%
## File description:
## Makefile
##

LPATH	=	lib/my

CFLAGS	+=	-Iinclude -L$(LPATH)/.. -lmy -W -Wall

MAIN	=	src/main.o

SRC		=	src/%%PROJ%%.c

OBJ		=	$(SRC:.c=.o)

NAME	=	%%PROJ%%

TFLAGS	=	-lcriterion --coverage

TESTS	=	tests/test_%%PROJ%%.c

TOBJ	=	$(TESTS:.c=.o)

TNAME	=	tests/unit_test

all:		$(NAME)

lib:
	$(MAKE) -C $(LPATH)

$(NAME):	$(MAIN) $(OBJ) lib
	$(CC) -o $(NAME) $(MAIN) $(OBJ)

clean:
	rm -f $(MAIN) $(OBJ) $(TOBJ) tests/*.gc*
	$(MAKE) -C $(LPATH) clean

fclean:		clean
	rm -f $(NAME) $(TNAME)
	$(MAKE) -C $(LPATH) fclean

re:			fclean all

tests_run:	fclean $(OBJ) $(TOBJ) lib
	$(CC) -o $(TNAME) $(TOBJ) $(OBJ) $(TFLAGS)
	tests/unit_test

debug:		fclean
	CFLAGS=-g3 $(MAKE) re

.PHONY: clean fclean re tests_run debug