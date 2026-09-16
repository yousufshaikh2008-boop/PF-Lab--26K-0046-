#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    if (num2 != 0) {
        printf("Quotient: %d\n", num1 / num2);
        printf("Remainder: %d\n", num1 % num2);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
