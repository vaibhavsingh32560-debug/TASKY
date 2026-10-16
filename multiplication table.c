#include <stdio.h>

int main() {
    int num;

    // Ask the user to enter an integer
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);
    printf("-----------------------------\n");

    // Loop to calculate and print the table from 1 to 10
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
