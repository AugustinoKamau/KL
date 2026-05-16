#include <stdio.h>
#include <stdlib.h>
#include "scores.h"

int main(void)
{
	int a;
	printf("Enter the first number:\n");
	if(scanf("%d", &a) != 1)
        {
                fprintf(stderr, "Invalid input.\n");
                return EXIT_FAILURE;
        }
	int b;
	printf("Enter the second number:\n");
	if(scanf("%d", &b) != 1)
        {
                fprintf(stderr, "Invalid input.\n");
                return EXIT_FAILURE;
        }
	
		
    	int add_result = add(&a, &b);
    	int sub_result = sub(&a, &b);
    	int mul_result = mul(&a, &b);
    	int div_result = divide_int(&a, &b);
    	int mod_result = modula_int(&a, &b);

    	printf("%d + %d = %d\n", a, b, add_result);
    	printf("%d - %d = %d\n", a, b, sub_result);
    	printf("%d * %d = %d\n", a, b, mul_result);
    	printf("%d / %d = %d\n", a, b, div_result);
    	printf("%d %% %d = %d\n", a, b, mod_result);
	return EXIT_SUCCESS;
}
