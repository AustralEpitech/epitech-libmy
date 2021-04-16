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

TFLAGS	=	$(CFLAGS) -lcriterion --coverage

TESTS	=	tests/test_%%PROJ%%.c

TOBJ	=	$(TESTS:.c=.o)

TNAME	=	tests/unit_test

all:		$(NAME)

$(NAME):	$(MAIN) $(OBJ)
	$(MAKE) -C $(LPATH)
	$(CC) -o $(NAME) $(MAIN) $(OBJ) $(CFLAGS)

clean:
	rm -f $(MAIN) $(OBJ) $(TOBJ) tests/*.gc*
	$(MAKE) -C $(LPATH) clean

fclean:		clean
	rm -f $(NAME) $(TNAME)
	$(MAKE) -C $(LPATH) fclean

re:			fclean all

tests_run:	fclean $(OBJ) $(TOBJ)
	$(MAKE) -C $(LPATH)
	$(CC) -o $(TNAME) $(TOBJ) $(OBJ) $(TFLAGS)
	tests/unit_test

debug:		fclean
	CFLAGS=-g3 $(MAKE) re

.PHONY: all clean fclean re tests_run debug