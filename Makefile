.PHONY: all clean

CC = gcc
CFLAGS = -std=c17 -Wall -Wextra -g
TARGETS = main scores

all: $(TARGETS)

main: main.o
	$(CC) $(CFLAGS) main.o -o main

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o


scores: scores.o
	$(CC) $(CFLAGS) score.o -o scores

scores.o: scores.c scores.h
	$(CC) $(CFLAGS) -c scores.c -o scores.o

clean:
	rm -f $(TARGETS) *.o
	rm -rf *.dSYM

