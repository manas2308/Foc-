#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // Return the index if key is found
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int arr[] = {10, 25, 8, 17, 3, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the key to search: ");
    scanf("%d", &key);

    int index = linearSearch(arr, n, key);

    if (index != -1)
        printf("Key found at index %d\n", index);
    else
        printf("Key not found\n");

    return 0;
}
