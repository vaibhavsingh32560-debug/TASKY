#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Primary check: Is it perfectly divisible by 4?
    if (year % 4 == 0) {
        
        // Secondary check for century years
        if (year % 100 == 0) {
            
            // Tertiary check for 400-year alignment
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
            } 
            else {
                printf("%d is NOT a leap year.\n", year);
            }
        } 
        else {
            printf("%d is a leap year.\n", year);
        }
    } 
    else {
        printf("%d is NOT a leap year.\n", year);
    }

    return 0;
}
