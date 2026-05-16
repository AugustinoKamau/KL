#include <stdio.h>
#include <stdlib.h>
#include "scores.h"

int add(int *a, int *b)
{
	return *a + *b;
}
int sub(int *a, int *b)
{
        return *a - *b;
}
int mul(int *a, int *b)
{
        return *a * *b;
}
int divide_int(int *a, int *b)
{
	if(*b == 0)
	{
		fprintf(stderr, "Invalid input.\n");
		return EXIT_FAILURE;
	}
	return *a / *b;
}
int modula_int(int *a, int *b)
{
        if(*b == 0)
        {
                fprintf(stderr, "Invalid input.\n");
                return EXIT_FAILURE;
        }
        return *a % *b;
}
void print(int *a, int *b)
{
	printf("a = %d, b = %d\n", *a, *b);
}


