#include <stdio.h>

int main() {
    float length, width, height;
    float surface_area, volume;

    // Prompt user for dimensions
    printf("Enter the length of the cuboid: ");
    scanf("%f", &length);

    printf("Enter the width of the cuboid: ");
    scanf("%f", &width);

    printf("Enter the height of the cuboid: ");
    scanf("%f", &height);

    // Calculate Total Surface Area
    surface_area = 2 * (length * width + width * height + length * height);

    // Calculate Volume
    volume = length * width * height;

    // Display the results
    printf("\n--- Results ---\n");
    printf("Total Surface Area: %.2f\n", surface_area);
    printf("Volume: %.2f\n", volume);

    return 0;
}