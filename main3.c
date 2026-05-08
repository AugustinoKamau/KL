#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}

int sub(int a, int b)
{
	int dif;
        dif = a - b;
        return dif;
}

int mul(int a, int b)
{
	int product;
        product = a * b;
        return product;
}

int div_int(int a, int b)
{
	int division;
        division= a / b;
        return division;
}

int mod_int(int a, int b)
{
        int modula;
        modula = a % b;
        return modula;
}

int main(void)
{
	int a, b, result;
	char OP;
	
	printf("Enter two numbers: ");
    	if (scanf("%d %d", &a, &b) != 2) {
        	fprintf(stderr, "Invalid input.\n");
        	return EXIT_FAILURE;
    	}	

    	printf("Choose operator (+, -, *, /, %%): ");
    	if (scanf(" %c", &OP) != 1) {
        	fprintf(stderr, "Invalid operator input.\n");
        	return EXIT_FAILURE;
    	}
	switch(OP)
	{
		case '+':
			result = add(a,b);
			printf("The sum = %d", result);
			break;
	
		case'-':
			result = sub(a,b);
			printf("The difference = %d", result);
			break;

		case'*':
			result = mul(a,b);
			printf("The product = %d", result);
			break;
		case'/':
			if (b == 0) {
                		fprintf(stderr, "Cannot divide by zero.\n");
                		return EXIT_FAILURE;
           		}
            		result = div_int(a, b);
            		printf("The division = %d\n", result);
           		 break;
		case'%':
			if (b == 0) {
                		fprintf(stderr, "Cannot modulo by zero.\n");
                		return EXIT_FAILURE;
            		}
            		result = mod_int(a, b);
            		printf("The remainder = %d\n", result);
            		break;

		default:
			fprintf(stderr, "Invalid operation.\n");
            		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
