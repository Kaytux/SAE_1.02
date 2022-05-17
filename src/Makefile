CC = gcc
CFLAGS = -Wall -fPIC

all : testGlobal

testGlobal : testGlobal.o personne.o
	$(CC) -o testGlobal testGlobal.o personne.o

testGlobal.o : testGlobal.c personne.c
	$(CC) -c $(CFLAGS) testGlobal.c

personne.o : personne.h personne.c
	$(CC) -c $(CFLAGS) personne.c

clean :
	rm -f testGlobal *.o