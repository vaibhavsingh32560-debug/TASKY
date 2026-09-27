#include <stdio.h>

int main() {
    int marks;

    // 1. Take input from the user
    printf("Enter the marks obtained (0-100): ");
    scanf("%d", &marks);

    // 2. Validate input and check pass/fail status
    if (marks < 0 || marks > 100) {
        printf("Invalid input! Marks should be between 0 and 100.\n");
    } 
    else if (marks >= 40) { // Assuming 40 is the passing mark
        printf("Result: PASS\n");
    } 
    else {
        printf("Result: FAIL\n");
    }

    return 0;
}