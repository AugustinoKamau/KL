.PHONY: all clean

CC = gcc
CFLAGS = -std=c17 -Wall -Wextra -g
TARGETS = main1 main2 main3

all: $(TARGETS)

main1: main1.o
	$(CC) $(CFLAGS) main1.o -o main1

main1.o: main1.c
	$(CC) $(CFLAGS) -c main1.c -o main1.o

main2: main2.o
	$(CC) $(CFLAGS) main2.o -o main2

main2.o: main2.c
	$(CC) $(CFLAGS) -c main2.c -o main2.o

main3: main3.o
	$(CC) $(CFLAGS) main3.o -o main3

main3.o: main3.c
	$(CC) $(CFLAGS) -c main3.c -o main3.o

clean:
	rm -f $(TARGETS) *.o
	rm -rf *.dSYM

