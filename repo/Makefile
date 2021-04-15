##
## EPITECH PROJECT, 2021
## %%PROJ%%
## File description:
## Makefile
##

LIBPATH	=	lib/my

CFLAGS	=	-Iinclude -L$(LIBPATH)/.. -lmy

SRC		=	src/main.c		\
			src/%%PROJ%%.c

OBJ		=	$(SRC:.c=.o)

TEST	=	tests/test_%%PROJ%%

TESTOBJ	=	$(TEST:.c=.o)

NAME	=	%%PROJ%%

.PHONY: 	lib

all:		lib $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

lib:
	$(MAKE) -C $(LIBPATH)

clean:
	rm -f $(OBJ)
	rm -f $(TESTOBJ)
	$(MAKE) -C $(LIBPATH) clean

fclean:		clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBPATH) fclean

re:			fclean all

tests_run:
	$(CC) $(TESTOBJ) $(OBJ) -o tests/unit_test $(CFLAGS) -lcriterion --coverage
	tests/unit_test