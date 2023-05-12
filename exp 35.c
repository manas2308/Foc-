#include <stdio.h>

int main() {
    int totalCredits = 0;
    float totalGradePoints = 0.0;
    char course[100];
    char grade;
    int units;

    while (1) {
        printf("Enter the name of the course (or 'quit' to exit): ");
        scanf("%s", course);

        if (strcmp(course, "quit") == 0) {
            break;  // Exit the loop if 'quit' is entered
        }

        printf("Enter the letter grade for %s: ", course);
        scanf(" %c", &grade);

        printf("Enter the units of credit for %s: ", course);
        scanf("%d", &units);

        // Calculate the grade points based on the letter grade
        float gradePoint;
        switch (grade) {
            case 'A':
                gradePoint = 4.0;
                break;
            case 'B':
                gradePoint = 3.0;
                break;
            case 'C':
                gradePoint = 2.0;
                break;
            case 'D':
                gradePoint = 1.0;
                break;
            case 'F':
                gradePoint = 0.0;
                break;
            default:
                printf("Invalid grade entered for %s\n", course);
                continue;  // Skip to the next iteration of the loop
        }

        // Update the total grade points and credits
        totalGradePoints += gradePoint * units;
        totalCredits += units;
    }

    // Calculate the GPA
    float gpa = totalGradePoints / totalCredits;

    printf("\nGrade Point Average (GPA): %.2f\n", gpa);

    return 0;
}