##
## EPITECH PROJECT, 2021
## %%PROJ%%
## File description:
## Makefile
##

LIBPATH	=	lib/my

CFLAGS	=	-Iinclude -L$(LIBPATH)/.. -lmy

SRC		=	src/main.c		\
			src/%%PROJ%%

OBJ		=	$(SRC:.c=.o)

TEST	=	tests/test_%%PROJ%%

TESTOBJ	=	$(TEST:.c=.o)

NAME	=	%%PROJ%%

all:		$(NAME) clean

$(NAME):	lib $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

lib:
	make -C $(LIBPATH)

clean:
	rm -f $(OBJ)
	rm -f $(TESTOBJ)
	make -C $(LIBPATH) clean

fclean:		clean
	rm -f $(NAME)
	make -C $(LIBPATH) fclean

re:			fclean all

tests_run:	unit_test
	$(CC) $(TESTOBJ) $(OBJ) -o tests/unit_test $(CFLAGS) -lcriterion --coverage
	tests/unit_test