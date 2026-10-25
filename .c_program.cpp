#include <stdio.h>

int main() {
    int age;
    int status;

    do {
        printf("Enter your age (1 - 120): ");
        status = scanf("%d", &age);

        if (status == 0) {
            printf("Invalid input type! Please enter a number.\n");
            while (getchar() != '\n'); 
        } else if (age < 1 || age > 120) {
            printf("Age out of range! Try again.\n");
        }

    } while (status == 0 || age < 1 || age > 120);

    printf("Valid age recorded: %d\n", age);
    return 0;
}
