#include <stdio.h>

int main()
 {
    float side, surface_area;
    printf("Enter the length of any side of the cube: ");
    scanf("%f", &side);
    surface_area = 6 * side * side;
    printf("Total Surface Area of Cube: %.2f\n", surface_area);
    return 0;
}
