all: main.o uch.o
	@gcc main.o uch.o -o program
	@./program

main.o: main.c uch.h
	@gcc -c main.c

uch.o: uch.c uch.h
	@gcc -c uch.c
