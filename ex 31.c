#include <stdio.h>

int main() {
    int cubicFeet;
    float billAmount = 0.0;

    printf("Enter the cubic feet of water used: ");
    scanf("%d", &cubicFeet);

    if (cubicFeet <= 1000) {
        billAmount = 15.00;
    } else if (cubicFeet <= 2000) {
        billAmount = 15.00 + (0.0175 * (cubicFeet - 1000));
    } else if (cubicFeet <= 3000) {
        billAmount = 15.00 + (0.0175 * 1000) + (0.02 * (cubicFeet - 2000));
    } else {
        billAmount = 15.00 + (0.0175 * 1000) + (0.02 * 1000) + (0.02 * (cubicFeet - 3000));
    }

    printf("Water bill: $%.2f\n", billAmount);

    return 0;
}