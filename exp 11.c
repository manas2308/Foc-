#include <stdio.h>

int main() {
    int n, i;
    long int sum = 0, term = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += term;
        term *= i;
    }

    printf("Sum of the series = %ld\n", sum);

    return 0;
}
