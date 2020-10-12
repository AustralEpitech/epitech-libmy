##
## EPITECH PROJECT, 2020
## cpool10
## File description:
## Makefile
##

all: compil

compil:
	gcc -c *.c
	ar rc libmy.a *.o
	cp libmy.a ..
	rm -f *.o
	cp my.h ../../include

clean:
	rm -f *.o

auteur:
	echo $(USER) > auteur