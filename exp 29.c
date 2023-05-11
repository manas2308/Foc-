#include <stdio.h>
#include <math.h>

double calculatePower(double base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * calculatePower(base, exponent - 1);
}

double calculateFactorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * calculateFactorial(n - 1);
}

int main() {
    int x, n, i;
    double sum = 0.0;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        double term = calculatePower(x, i) / calculateFactorial(i);
        sum += term;
    }

    printf("Exponential series for %d with %d terms is: %.4f\n", x, n, sum);

    return 0;
}
