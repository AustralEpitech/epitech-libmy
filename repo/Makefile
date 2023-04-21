##
## EPITECH PROJECT, {{YEAR}}
## {{PROJ}}
## File description:
## Makefile
##

LDFLAGS	:=	-Llib/ -lmy
CFLAGS	+=	-Wpedantic -Wall -Wextra -Iinclude -MMD

TFLAGS	:=	--coverage
TLIBS	:=	-lcriterion

SRC		:=	src/main.c	\

TESTS	:=	tests/test_function.c	\

OBJ		:=	$(SRC:.c=.o)
DEP		:=	$(OBJ:.o=.d)
TOBJ	:=	$(filter-out src/main.o,$(OBJ)) $(TESTS:.c=.o)

NAME	:=	{{PROJ}}

TNAME	:=	unit_test

all:		$(NAME)

lib:
	$(MAKE) -C lib/

$(NAME):	lib $(OBJ)
	$(CC) -o $@ $(OBJ) $(LDFLAGS)

clean:
	$(MAKE) -C lib/ $@
	$(RM) $(OBJ) $(TOBJ) $(TOBJ:.o=.gc*) $(DEP) $(TOBJ:.o=.d)

fclean:		clean
	$(MAKE) -C lib/ $@
	$(RM) $(NAME) $(TNAME)

re:			fclean
	$(MAKE)

tests_run:	fclean
	CFLAGS="$(TFLAGS)" $(MAKE) $(TOBJ) $(OBJ) lib
	$(CC) -o $(TNAME) $(TOBJ) $(LDFLAGS) $(TLIBS) $(TFLAGS)
	./$(TNAME)

debug:		fclean
	CFLAGS=-g3 $(MAKE)

norm:		fclean
	banana.sh

.PHONY:		all lib clean fclean re tests_run debug norm
-include $(DEP)
