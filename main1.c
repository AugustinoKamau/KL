#include <stdio.h>
#include <stdlib.h>


double average_int(void)
{
	int marks[10];
	int i = 0;
	int n = 0;
	int sum = 0;

	printf("Enter the number of elements (1 - 10)\n: ");
	if (scanf("%d", &n) != 1 || n < 1 || n > 10)
	{
		fprintf(stderr, "Invalid number of elements.\n");
		return -1.0;
	}

	for (i = 0; i < n; ++i)
	{
		printf("Enter number %d", i + 1);
		if (scanf("%d", &marks[i]) != 1)
		{
			fprintf(stderr, "Invalid input.\n");
			return -1.0;
		}

		sum += marks[i];
	}

	return  (double)sum / n;
}

int main(void)
{
	
	double average = average_int();
	if (average < 0.0)
	{
		return EXIT_FAILURE;
	}

	printf("The average = %.2f", average);
	return EXIT_SUCCESS;
}
