#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1-3): ");
    scanf("%d", &day);

    // The switch expression must evaluate to an integer or character
    switch (day) {
        case 1:
            printf("Monday\n");
            break; // Exits the switch block
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            // Executed if no case matches
            printf("Invalid input! Please enter a number between 1 and 3.\n");
    }

    return 0;
}
