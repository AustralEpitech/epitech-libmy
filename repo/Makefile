##
## EPITECH PROJECT, 2021
## %%PROJ%%
## File description:
## Makefile
##

SHELL	=	/bin/sh

LIBS	=	my_{error,math,stdio,stdlib,string,strings}
LDFLAGS	=	-Llib -l$(LIBS)

CFLAGS	+=	-Wpedantic -Wall -Wextra -Iinclude

TFLAGS	=	--coverage
TLIBS	=	-lcriterion

SRC		=	src/main.c		\
			src/%%PROJ%%.c

TESTS	=	tests/test_%%PROJ%%.c

OBJ		=	$(SRC:.c=.o)
TOBJ	=	$(filter-out src/main.o,$(OBJ)) $(TESTS:.c=.o)

NAME	=	%%PROJ%%

TNAME	=	unit_test

.PHONY:		all lib clean fclean re tests_run debug

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

tests_run:	CFLAGS += $(TFLAGS)
tests_run:	fclean lib $(TOBJ)
	$(CC) -o $(TNAME) $(TOBJ) $(LDFLAGS) $(TLIBS) $(TFLAGS)
	./$(TNAME)

debug: CFLAGS += -g3
debug: re
