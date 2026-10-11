#include <stdio.h>

int main() {
    // Declare double type variables for higher precision
    double num1, num2, product;

    // Prompt the user for input
    printf("Enter two decimal numbers: ");
    
    // Read the inputs using %lf format specifier for double
    scanf("%lf %lf", &num1, &num2);

    // Perform the multiplication
    product = num1 * num2;

    // Display the result
    // %.2lf limits the output to 2 decimal places
    printf("Product = %.2lf\n", product);

    return 0;
}
