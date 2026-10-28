#include <stdio.h>
#include <math.h>

int main() {
    int N, temp, remainder, digits = 0, result = 0;
    scanf("%d", &N);
    temp = N;

    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = N;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    if (result == N) {
        printf("Armstrong Number\n");
    } else {
        printf("Not Armstrong Number\n");
    }
    return 0;
}
