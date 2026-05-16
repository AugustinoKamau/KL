.PHONY: all clean

CC = gcc
CFLAGS = -std=c17 -Wall -Wextra -g

all: main

main: main.o scores.o
	$(CC) $(CFLAGS) main.o scores.o -o main

main.o: main.c scores.h
	$(CC) $(CFLAGS) -c main.c -o main.o

scores.o: scores.c scores.h
	$(CC) $(CFLAGS) -c scores.c -o scores.o

clean:
	rm -f main main.o scores.o
	rm -rf *.dSYM

