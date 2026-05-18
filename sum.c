#include <stdio.h>
#include <stdlib.h>
#include "sum.h"
int sum_n_numbers(int n)
{
	int i, *ptr, sum = 0;
	
	if (n <= 0)
	{
		fprintf(stderr, "Invalid input.\n");
        	return EXIT_FAILURE;
	}

	ptr = (int*) malloc(n * sizeof(int));
	if(ptr == NULL)
	{
		fprintf(stderr, "Error! memory not allocated.");
		return EXIT_FAILURE;
	}

	for(i = 0; i < n; ++i)
	{
		if (scanf("%d", ptr + i) != 1) 
		{
            		fprintf(stderr, "Invalid input.\n");
            		free(ptr);
            		return EXIT_FAILURE;
        	}
		sum += ptr[i];
	}

	printf("Sum = %d", sum);
	free(ptr);
	return EXIT_SUCCESS;
}
