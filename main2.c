#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
	char first_name[50];
	char last_name[50];
	char full_name[100];

	printf("Enter the first name\n: ");
	fgets(first_name, sizeof(first_name), stdin);
	first_name[strcspn(first_name, "\n")] = '\0';

	printf("Enter the last name\n: ");
        fgets(last_name, sizeof(last_name), stdin);
        last_name[strcspn(last_name, "\n")] = '\0';

	printf("Length of first name: %zu\n", strlen(first_name));
	printf("Length of last name: %zu\n", strlen(last_name));

	if (strcmp(first_name, "Kamau") == 0 && strcmp(last_name, "Augustino") == 0) 
	{
    		printf("First and last name match.\n");
	}

	snprintf(full_name, sizeof(full_name), "%s %s", first_name, last_name);
    	printf("Full name: %s\n", full_name);

    	return EXIT_SUCCESS;
}

