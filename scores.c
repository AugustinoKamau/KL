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
	int i;
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

double calc_average(const int arr[], int n)
{
	double sum = 0.0;
	int i;
	if (n <= 0)
	{
		return 0.0;
	}
	for (i = 0; i < n; ++i)
	{
		sum += arr[i];
	}
	return sum / n;
}

int find_max(int arr[], int n)
{
	int max = arr[0];
	int i;
	for (i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int find_min(int arr[], int n)
{
	int min= arr[0];
        int i;
        for (i = 1; i < n; i++)
        {
                if (arr[i] < min)
                {
                        min = arr[i];
                }
        }
        return min;
}

int count_pass(const int arr[], int n)
{
	int count = 0;
	int i;
 	for( i = 0; i < n; i++)
	{
		if (arr[i] >= 100) 
		{
			count++;
		}
	}
	return count;
}

