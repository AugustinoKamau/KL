#include <stdio.h>
#include <stdlib.h>
#include "scores.h"
       
int main(void)
{
    	int add_result = add(8, 9);
    	int sub_result = sub(8, 9);
    	int mul_result = mul(8, 9);
    	int div_result = divide_int(8, 9);
    	int mod_result = mod_int(8, 9);

    	printf("8 + 9 = %d\n", add_result);
    	printf("8 - 9 = %d\n", sub_result);
    	printf("8 * 9 = %d\n", mul_result);
    	printf("8 / 9 = %d\n", div_result);
    	printf("8 %% 9 = %d\n", mod_result);
	return EXIT_SUCCESS;
}
