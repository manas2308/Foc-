#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        printf("Enter number %d: ", i);
        float num;
        scanf("%f", &num);
        sum += num;
    }

    average = sum / n;
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
