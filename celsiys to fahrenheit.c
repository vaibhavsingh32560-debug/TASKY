#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius from user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Celsius to Fahrenheit conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result up to 2 decimal places
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
