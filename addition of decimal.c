#include <stdio.h>

int main() {
    // 1. Declare float variables
    float number1 = 5.75;
    float number2, sum;

    // 2. Print a hardcoded float value
    // %.2f limits the output to 2 decimal places
    printf("Number 1 is: %.2f\n", number1);

    // 3. Take float input from the user
    printf("Enter a decimal number: ");
    // %f is the format specifier for float
    scanf("%f", &number2);

    // 4. Perform arithmetic operations
    sum = number1 + number2;

    // 5. Display the result
    printf("The sum of %.2f and %.2f is: %.2f\n", number1, number2, sum);

    return 0;



