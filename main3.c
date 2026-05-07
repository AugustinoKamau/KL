#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}

int main(void)
{
	int result;
	
	result = add(3,50);
	printf("3 + 50 = %d", result);
 	printf("\n");
	printf("3 + 50 = %d", add(3, 50));
	return EXIT_SUCCESS;
}
