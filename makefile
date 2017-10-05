all: mystr.o main.o
	gcc -o strtest mystr.o main.o

mystr.o: mystr.c string.h
	gcc -c mystr.c

main.o: main.c mystr.o
	gcc -c main.c

run: all
	./strtest

clean:
	rm *.o
	rm *~
