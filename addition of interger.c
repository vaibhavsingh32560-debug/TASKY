#include <stdio.h>

int main() {
    // Declare integer variables to store the inputs and the result
    int num1, num2, sum;

    // Prompt the user for the first number
    printf("Enter the first integer: ");
    // Read and store the integer input
    scanf("%d", &num1);

    // Prompt the user for the second number
    printf("Enter the second integer: ");
    // Read and store the integer input
    scanf("%d", &num2);

    // Perform the addition using the + operator
    sum = num1 + num2;

    // Display the final result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
