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

    if (OP == '+') {
        result = num1 + num2;
        printf("The sum = %.2f\n", result);
    } else if (OP == '-') {
        result = num1 - num2;
        printf("The difference = %.2f\n", result);
    } else if (OP == '*') {
        result = num1 * num2;
        printf("The product = %.2f\n", result);
    } else if (OP == '/') {
        if (num2 == 0) {
            fprintf(stderr, "Cannot divide by zero.\n");
            return EXIT_FAILURE;
        }
        result = (double)num1 / num2;
        printf("The result = %.2f\n", result);
    } else if (OP == '%') {
        if (num2 == 0) {
            fprintf(stderr, "Cannot modulo by zero.\n");
            return EXIT_FAILURE;
        }
        int rem = num1 % num2;
        printf("The remainder = %d\n", rem);
    } else {
        fprintf(stderr, "Invalid operator.\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

