#include <stdio.h>
#include <stdlib.h>
#include "scores.h"

int main(void)
{
	int arr[10];
	double avg = 0.0;
	int max = 0, min = 0, count = 0;
	if (avg  == EXIT_FAILURE || max == EXIT_FAILURE || min == EXIT_FAILURE || count == EXIT_FAILURE )
	{
		return EXIT_FAILURE;
	}
	
	avg = read_scores(arr,10);
	max = find_max(arr, 10);
    	min = find_min(arr, 10);
    	avg = calc_average(arr, 10);
    	count = count_pass(arr, 10);

    	printf("Max = %d\n", max);
    	printf("Min = %d\n", min);
    	printf("Average = %.2f\n", avg);
    	printf("Pass count = %d\n", count);	

	return EXIT_SUCCESS;
}
