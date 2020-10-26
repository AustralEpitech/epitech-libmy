CFLAGS	=	-Iinclude -Llib -lmy -Wall -Wextra

SRC		=	

OBJ		=	$(SRC:.c=.o)

NAME	=	

.PHONY:	lib

all:		$(NAME) clean

$(NAME):	lib $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

lib:
	make -s -C lib/my && make -C lib/my clean

clean:
	rm -f $(OBJ)
	make -C lib/my clean

fclean:		clean
	rm -f $(NAME)
	make -C lib/my fclean

re:			fclean all
	make -C lib/my re