#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Before swapping: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

    // Swapping num1 and num2
    swap(&num1, &num2);

    // Swapping num2 and num3
    swap(&num2, &num3);

    printf("After swapping: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

    return 0;
}
