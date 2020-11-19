LIBPATH		=	lib/my

CFLAGS	=	-Iinclude -L$(LIBPATH)/.. -lmy

SRC		=	sources/

OBJ		=	$(SRC:.c=.o)

TEST	=	tests/test_

TESTOBJ	=	$(TEST:.c=.o)

NAME	=

.PHONY:	lib

all:		$(NAME) clean

$(NAME):	lib $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

lib:
	make -s -C $(LIBPATH)

clean:
	rm -f $(OBJ)
	make -C $(LIBPATH) clean

fclean:		clean
	rm -f $(NAME)
	make -C $(LIBPATH) fclean

re:			fclean all
	make -C $(LIBPATH) re

unit_test:	$(OBJ) $(TESTOBJ)
	gcc $(TESTOBJ) $(OBJ) -o tests/unit_test $(CFLAGS) -lcriterion

run_test:	unit_test
	tests/unit_test