.PHONY: all clean

all: main1 main2 main3

clean: rm -f main1 main1.c main2 main2.c main3 main3.c

main1: main1.o
	gcc main1.o -o main1

main.o: main1.c
	gcc -c main1.c -o main1.o

main2: main2.o
	gcc main2.o -o main2

main2.o: main2.c
	gcc -c main2.c -o main2.o

main3.o: main3.o
	gcc main3.o -o main3

main3.o: main3.c
	gcc -c main3.c -o main3.o
