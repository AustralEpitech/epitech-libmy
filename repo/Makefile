##
## EPITECH PROJECT, {{YEAR}}
## {{PROJ}}
## File description:
## Makefile
##

LIBS		:=	lists my_{error,math,stdio,stdlib,string,strings}
LDFLAGS		:=	-Llib -l$(LIBS)

CFLAGS		+=	-Wpedantic -Wall -Wextra -Iinclude -MMD

TFLAGS		:=	--coverage
TLIBS		:=	-lcriterion

SRC			:=	src/main.c

TESTS		:=	tests/test_function.c

OBJ			:=	$(SRC:.c=.o)
DEP		:=	$(OBJ:.o=.d)
TOBJ		:=	$(filter-out src/main.o,$(OBJ)) $(TESTS:.c=.o)
TDEP	:=	$(TOBJ:.o=.d)

NAME		:=	{{PROJ}}

TNAME		:=	unit_test

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

re:			fclean
	$(MAKE)

tests_run:	CFLAGS += $(TFLAGS)
tests_run:	fclean lib $(TOBJ)
	$(CC) -o $(TNAME) $(TOBJ) $(LDFLAGS) $(TLIBS) $(TFLAGS)
	./$(TNAME)

debug:		fclean
	CFLAGS=-g3 $(MAKE)

.PHONY:		all lib clean fclean re tests_run debug
-include $(DEP)
