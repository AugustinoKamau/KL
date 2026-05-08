#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2;
    	char OP;
    	double result;

    	printf("Enter two numbers: ");
    	if (scanf("%d %d", &num1, &num2) != 2) {
        	fprintf(stderr, "Invalid input.\n");
        	return EXIT_FAILURE;
    	}	

    	printf("Choose operator (+, -, *, /, %%): ");
    	if (scanf(" %c", &OP) != 1) {
        	fprintf(stderr, "Invalid operator input.\n");
        	return EXIT_FAILURE;
    	}
	switch(OP){
		case '+':
			result = num1 + num2;
			printf("The sum = %.2f", result);
			break;
		case '-':
                        result = num1 - num2;
                        printf("The difference = %.2f", result);
                        break;
		case '*':
                        result = num1 * num2;
                        printf("The product = %.2f", result);
                        break;
		case '/':
			if (num1 == 0){
				fprintf(stderr, "cannot divide by zero");
				return EXIT_FAILURE;
			}
                        result = num1 / num2;
                        printf("The difference = %.2f", result);
                        break;
		case '%':
			if (num2 == 0) {
                		fprintf(stderr, "Cannot modulo by zero.\n");
                		return EXIT_FAILURE;
            		}
                        result = num1 %  num2;
                        printf("The remainder = %.2f", result);
                        break;
		default:
			printf("Invalid operation!!\n");
	}
    	return EXIT_SUCCESS;
}

