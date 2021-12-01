##
## EPITECH PROJECT, 2021
## %%PROJ%%
## File description:
## Makefile
##

SHELL	=	/bin/bash

LIBS	=	my_{error,math,stdio,stdlib,string,strings}
LDFLAGS	=	-Llib -l$(LIBS)

CFLAGS	+=	-Wpedantic -Wall -Wextra -Iinclude

TFLAGS	=	--coverage
TLIBS	=	-lcriterion

MAIN	=	src/main.c
SRC		=	src/%%PROJ%%.c

TESTS	=	tests/test_%%PROJ%%.c

OBJ		=	$(MAIN:.c=.o) $(SRC:.c=.o)
TOBJ	=	$(SRC:.c=.o) $(TESTS:.c=.o)

NAME	=	%%PROJ%%

TNAME	=	unit_test

.PHONY:		all lib clean fclean re tests_run

all:		lib $(NAME)

lib:
	@for i in $(LIBS); do $(MAKE) -C lib/$$i; done

$(NAME):	$(OBJ)
	$(CC) -o $@ $(OBJ) $(LDFLAGS)

clean:
	@for i in $(LIBS); do $(MAKE) -C lib/$$i $@; done
	$(RM) $(OBJ) $(TOBJ) $(TOBJ:.o=.gc*)

fclean:		clean
	@for i in $(LIBS); do $(MAKE) -C lib/$$i $@; done
	$(RM) $(NAME) $(TNAME)

re:			fclean all

tests_run:	fclean lib $(SRC) $(TESTS)
	@CFLAGS="$(TFLAGS)" $(MAKE) $(TOBJ)
	$(CC) -o $(TNAME) $(TOBJ) $(LDFLAGS) $(TLIBS) $(TFLAGS)
	./$(TNAME)
