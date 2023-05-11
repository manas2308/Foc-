#include <stdio.h>

int findMax(int arr[], int n) {
    int i;
    int max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main() {
    int n, i;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the integers: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, n);

    printf("The largest number is: %d\n", max);

    return 0;
}
