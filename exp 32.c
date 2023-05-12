#include <stdio.h>

int main() {
    int originalNumber, newNumber;
    int sumOfDigits = 0;
    
    // Step 1: Accept a four-digit number
    printf("Enter a four-digit number: ");
    scanf("%d", &originalNumber);

    // Step 2: Calculate the sum of the digits
    int tempNumber = originalNumber;
    while (tempNumber > 0) {
        sumOfDigits += tempNumber % 10;
        tempNumber /= 10;
    }
    
    // Step 3: Add a fifth digit to make the sum of the digits even
    int checkDigit = (sumOfDigits % 2 == 0) ? 0 : 1;
    
    // Step 4: Create the new number
    newNumber = originalNumber * 10 + checkDigit;
    
    // Step 5: Print the original number and the new number
    printf("Original number: %d\n", originalNumber);
    printf("New number: %d%d\n", originalNumber, checkDigit);

    return 0;
}