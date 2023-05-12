#include <stdio.h>

int main() {
    int numberOfPeople, isCompanyBusiness, isSeniorCitizen;
    float roomCost = 0.0;

    printf("Enter the number of people: ");
    scanf("%d", &numberOfPeople);

    printf("Is the customer staying on company business? (1 for yes, 0 for no): ");
    scanf("%d", &isCompanyBusiness);

    printf("Is the customer over 60 years of age? (1 for yes, 0 for no): ");
    scanf("%d", &isSeniorCitizen);

    if (numberOfPeople == 2) {
        roomCost = 85.00;
    } else if (numberOfPeople == 3) {
        roomCost = 90.00;
    } else if (numberOfPeople == 4) {
        roomCost = 95.00;
    } else if (numberOfPeople > 4) {
        roomCost = 95.00 + (6.00 * (numberOfPeople - 4));
    }

    if (isCompanyBusiness == 1) {
        roomCost *= 0.8; // Apply 20% discount for company business
    } else if (isSeniorCitizen == 1) {
        roomCost *= 0.85; // Apply 15% discount for senior citizens
    }

    printf("Cost of the room: $%.2f\n", roomCost);

    return 0;
}