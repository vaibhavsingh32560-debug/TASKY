
#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    float radius, height, slant_height, surface_area;

    printf("Enter the radius of the cone: ");
    scanf("%f", &radius);

    printf("Enter the height of the cone: ");
    scanf("%f", &height);

 
    slant_height = sqrt((radius * radius) + (height * height));

   
    surface_area = PI * radius * (radius + slant_height);

   
    printf("\nSlant Height of Cone = %.2f\n", slant_height);
    printf("Total Surface Area of Cone = %.2f\n", surface_area);

    return 0;
}
