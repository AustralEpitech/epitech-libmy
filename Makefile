LIBPATH		=	lib/my

LIB			=	my

INCLUDEPATH	=	include

CFLAGS	=	-I$(INCLUDEPATH) -L$(LIBPATH)/.. -l$(LIB) -Wall -Wextra

SRC		=

OBJ		=	$(SRC:.c=.o)

NAME	=

.PHONY:	lib

all:		$(NAME) clean

$(NAME):	lib $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

lib:
	make -s -C $(LIBPATH) && make -C $(LIBPATH) clean

clean:
	rm -f $(OBJ)
	make -C $(LIBPATH) clean

fclean:		clean
	rm -f $(NAME)
	make -C $(LIBPATH) fclean

re:			fclean all
	make -C $(LIBPATH) re