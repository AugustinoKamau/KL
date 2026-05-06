#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num;

	printf("Enter integer\n");
	if (scanf("%d",&num) != 1){
	fprintf(stderr, "Invalid input.\n");
	return EXIT_SUCCESS;
	}

	if (num > 0){
		printf("Positive.\n");
	}
	else if (num < 0){
		printf("Negative.\n");
	}

	else {
		printf("Zero.\n");
	}


	return EXIT_SUCCESS;
}
