#include <stdio.h>

int main() {
    int number;

    // Ask the user to input an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is perfectly divisible by 2
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } 
    else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}
