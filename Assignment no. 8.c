#include <stdio.h>

int main() {
    float marks[5], total = 0, percentage;
    int pass = 1;

    printf("Enter marks of 5 courses: ");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
        total += marks[i];
        if (marks[i] < 40)
            pass = 0;
    }

    percentage = (total / 500) * 100;

    printf("Total Marks = %.0f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (!pass) {
        printf("Result: FAIL\n");
        printf("Grade: FAIL\n");
    } else {
        printf("Result: PASS\n");
        if (percentage >= 75)
            printf("Grade: Distinction\n");
        else if (percentage >= 60)
            printf("Grade: First Division\n");
        else if (percentage >= 50)
            printf("Grade: Second Division\n");
        else
            printf("Grade: Third Division\n");
    }

    return 0;
}