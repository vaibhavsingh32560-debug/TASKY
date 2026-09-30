#include <stdio.h>

int main() {
    float physics, chemistry, math, english, computer; 
    float total, percentage;

    // 1. Input marks for 5 subjects
    printf("Enter marks for 5 subjects (out of 100):\n");
    printf("Physics: ");
    scanf("%f", &physics);
    printf("Chemistry: ");
    scanf("%f", &chemistry);
    printf("Mathematics: ");
    scanf("%f", &math);
    printf("English: ");
    scanf("%f", &english);
    printf("Computer Science: ");
    scanf("%f", &computer);

    // 2. Calculate total and percentage
    total = physics + chemistry + math + english + computer;
    percentage = (total / 500.0) * 100;

    printf("\n--- Results ---\n");
    printf("Total Marks: %.2f / 500.00\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    // 3. Grade calculation using else-if ladder
    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 70) {
        printf("Grade: C\n");
    } else if (percentage >= 60) {
        printf("Grade: D\n");
    } else if (percentage >= 40) {
        printf("Grade: E\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}
