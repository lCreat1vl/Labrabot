all: main.o func.o search.o
	gcc main.o func.o search.o
main.o: main.c
	gcc -c main.c
func.o: func.c
	gcc -c func.c
search.o: search.c
	gcc -c search.c
