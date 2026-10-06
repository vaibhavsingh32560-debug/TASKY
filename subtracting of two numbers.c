#include <stdio.h>

int main() {
    int num1, num2, result;

    // Prompt user for the first integer
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Prompt user for the second integer
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Subtract num2 from num1
    result = num1 - num2;

    // Display the result
    printf("The result of subtraction is: %d\n", result);

    return 0;
}
