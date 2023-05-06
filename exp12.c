#include <stdio.h>

int main() {
    int n, i;
    long int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2) {
        sum += i * i;
    }

    printf("Sum of squares of odd numbers = %ld\n", sum);

    return 0;
}
