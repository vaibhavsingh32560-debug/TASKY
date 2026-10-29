#include <stdio.h>

int main() {
    int rows, i, j;
    int current_odd = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("\n--- Odd Number Triangle ---\n");
    
    for (i = 1; i <= rows; i++) {
        
        for (j = 1; j <= i; j++) {
            printf("%d ", current_odd);
            current_odd += 2;
        }
        printf("\n"); 
    }

    return 0;
}
