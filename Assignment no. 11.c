#include <stdio.h>
#include <math.h>

int main() {
    int n, choice;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n1. Square Root\n");
    printf("2. Square\n");
    printf("3. Cube\n");
    printf("4. Check Prime\n");
    printf("5. Factorial\n");
    printf("6. Prime Factors\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            if (n < 0)
                printf("Square root not defined for negative numbers.\n");
            else
                printf("Square Root = %.2f\n", sqrt(n));
            break;

        case 2:
            printf("Square = %d\n", n * n);
            break;

        case 3:
            printf("Cube = %d\n", n * n * n);
            break;

        case 4:
            if (n < 2) {
                printf("%d is not prime.\n", n);
                break;
            }
            int prime = 1;
            for (int i = 2; i <= sqrt(n); i++) {
                if (n % i == 0) { prime = 0; break; }
            }
            printf("%d is %s.\n", n, prime ? "Prime" : "Not Prime");
            break;

        case 5:
            if (n < 0) {
                printf("Factorial not defined for negative numbers.\n");
                break;
            }
            long long fact = 1;
            for (int i = 1; i <= n; i++)
                fact *= i;
            printf("Factorial = %lld\n", fact);
            break;

        case 6:
            if (n < 2) {
                printf("No prime factors.\n");
                break;
            }
            printf("Prime Factors: ");
            int temp = n;
            for (int i = 2; i <= temp; i++) {
                while (temp % i == 0) {
                    printf("%d ", i);
                    temp /= i;
                }
            }
            printf("\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}