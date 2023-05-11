#include <stdio.h>
#include <math.h>

double calculateFactorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * calculateFactorial(n - 1);
}

double calculatePower(double base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * calculatePower(base, exponent - 1);
}

int main() {
    int x, n, i;
    double sum = 0.0;

    printf("Enter the value of x (in degrees): ");
    scanf("%d", &x);

    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    // Convert degrees to radians
    double radians = x * (3.14159 / 180.0);

    for (i = 0; i < n; i++) {
        int power = 2 * i;
        double term = calculatePower(-1, i) * calculatePower(radians, power) / calculateFactorial(power);
        sum += term;
    }

    printf("Cosine of %d degrees using %d terms is: %.4f\n", x, n, sum);

    return 0;
}
