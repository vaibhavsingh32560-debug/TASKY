#include <stdio.h>

int main() {
    float base, height, area;

    // Prompt user for input
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Calculate area
    area = 0.5 * base * height;

    // Display the result
    printf("Area of the triangle = %.2f square units\n", area);

    return 0;
}
