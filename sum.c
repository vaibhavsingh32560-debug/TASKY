#include <stdio.h>

// 1. Function Declaration (Prototype)
int addNumbers(int a, int b);

int main() {
    int sum;
    // 3. Function Call
    sum = addNumbers(5, 7); 
    printf("Sum = %d\n", sum);
    return 0;
}

// 2. Function Definition
int addNumbers(int a, int b) {
    int result = a + b;
    return result; // Returns the value to the caller
}