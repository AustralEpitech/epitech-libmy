LIBPATH	=	lib/my

CFLAGS	=	-Iinclude -L$(LIBPATH)/.. -lmy

SRC		=	src/

OBJ		=	$(SRC:.c=.o)

TEST	=	tests/test_

TESTOBJ	=	$(TEST:.c=.o)

NAME	=

.PHONY:	lib

all:		$(NAME)

$(NAME):	lib $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

lib:
	make -s -C $(LIBPATH)

clean:
	rm -f $(OBJ)
	rm -f $(TESTOBJ)
	make -C $(LIBPATH) clean

fclean:		clean
	rm -f $(NAME)
	make -C $(LIBPATH) fclean

re:			fclean all
	make -C $(LIBPATH) re

tests_run:	unit_test
	gcc $(TESTOBJ) $(OBJ) -o tests/unit_test $(CFLAGS) -lcriterion --coverage
	tests/unit_test