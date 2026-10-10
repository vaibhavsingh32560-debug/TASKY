#include <stdio.h>

int main() {
    double n1, n2, n3;

    // Take three numbers as input from the user
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    // Check if n1 is the greatest
    if (n1 >= n2 && n1 >= n3) {
        printf("%.2lf is the greatest number.\n", n1);
    }
    // Check if n2 is the greatest
    else if (n2 >= n1 && n2 >= n3) {
        printf("%.2lf is the greatest number.\n", n2);
    }
    // If neither n1 nor n2 is the greatest, n3 must be the greatest
    else {
        printf("%.2lf is the greatest number.\n", n3);
    }

    return 0;
}
