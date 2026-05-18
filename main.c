#include <stdio.h>
#include <stdlib.h>
#include "sum.h"

int main(void)
{
	int n;
	printf("Enter number of elements: ");
    	if (scanf("%d", &n) != 1) 
	{
        	fprintf(stderr, "Invalid input.\n");
        	return EXIT_FAILURE;
    	}

    return sum_n_numbers(n);
}

