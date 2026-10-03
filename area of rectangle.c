#include <stdio.h>

int main() {
    float length, width, area;

    // Asking the user for the length of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    // Asking the user for the width of the rectangle
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculating the area
    area = length * width;

    // Displaying the result rounded to 2 decimal places
    printf("The Area of the rectangle is: %.2f\n", area);

    return 0;
}
