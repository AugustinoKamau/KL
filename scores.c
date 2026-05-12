#include <stdio.h>
#include <stdlib.h>
#include "scores.h"

int read_scores(int arr[], int n)
{
	if (n != 10)
	{
		fprintf(stderr, "Invalid input.\n");
		return EXIT_FAILURE;
	}

	printf("Enter an Integer (0 -100).\n): ");
	for (i=0; i < n; i++)
	{
		if (scanf("%d", &arr[i]) !=1)
		{
			fprintf(stderr, "Invalid input.\n");
                	return EXIT_FAILURE;
        	}
	}
	return EXIT_SUCCESS;

}
/*
double calc_average(const int arr[], int n)
{
}

int find_max(int arr[], int n)
{
}

int find_min(int arr[], int n)
{
}

int count_pass(const int arr[], int n)
{
}
*/
