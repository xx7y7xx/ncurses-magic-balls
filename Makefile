PROGRAM	= magicballs
SOURCE = magicballs.c
LIBS = -lncurses
CC = gcc

all: magicballs

#$(PROGRAM): $(SOURCE)
#	$(CC) $(SOURCE) -o$(PROGRAM) $(LIBS)

magicballs: magicballs.o
	$(CC) -o $@ $^ $(LIBS)

magicballs.o: magicballs.c
	$(CC) -c $<

clean:
	rm -r *.o

build: magicballs clean
