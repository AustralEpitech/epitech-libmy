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

.PHONY: all
all:		$(NAME)

.PHONY: lib
lib:
	$(MAKE) -C lib/

$(NAME):	lib $(OBJ)
	$(CC) -o $@ $(OBJ) $(LDFLAGS)

.PHONY: clean
clean:
	$(MAKE) -C lib/ $@
	$(RM) $(OBJ) $(TOBJ) $(TOBJ:.o=.gc*) $(DEP) $(TOBJ:.o=.d)

.PHONY: fclean
fclean:		clean
	$(MAKE) -C lib/ $@
	$(RM) $(NAME) $(TNAME)

.PHONY: re
re:			fclean
	$(MAKE)

.PHONY: tests_run
tests_run:	fclean
	CFLAGS="$(TFLAGS)" $(MAKE) $(TOBJ) $(OBJ) lib
	$(CC) -o $(TNAME) $(TOBJ) $(LDFLAGS) $(TLIBS) $(TFLAGS)
	./$(TNAME)

.PHONY: debug
debug:		fclean
	CFLAGS=-g3 $(MAKE)

.PHONY: norm
norm:		fclean
	banana.sh

-include $(DEP)
