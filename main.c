#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int c = 5;
	int *pc;
	pc = &c;
	printf("%p\n", &pc);
	printf("%d\n", *pc);
	printf("%p\n", pc);
 	return EXIT_SUCCESS;
}
