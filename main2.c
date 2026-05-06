#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num1;
	int num2;
	double sum;
	double result;
	char OP;

	printf("Enter number: \n");
	if (scanf("%d %d", &num1, &num2) != 2){
		fprint(stderr, "Invalid input.\n");
	return EXIT_FAILURE;
	}

	printf("choose the +, -, *, /,% %.\n");
	if (scanf("%c", &OP) != 1){
		fprint(stderr, "Invalid");
		return EXIT_FAILURE;
	}

	if (OP == '+'){
		sum = num1 + num2;
		printf("The sum = %.2f\n", sum);
	}

	else if (OP == '-'){
		sum = num1 - num2;
		printf("The difference = %.2f\n", sum);
	}

	else if (OP == '*'){
                 sum = num1 * num2;
		printf("The product = %.2f\n", sum);
	}

	else if (OP == '/') {
		if (num2 == 0){
			fprintf(stderr, "Invalid it is not divisible by 0");
			return EXIT_FAILURE;
		}

		else{
			result = num1 / num2;
			printf("The result = %.2f",result);
		}

	else if (OP == %){
                        int rem = num1 % num2;
                        printf("The remainder = %d",rem);
                }

	else{
		fprintf(stderr,"Invalid Operator");
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
