#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int scd = -1;
    int smaller = (a < b) ? a : b;
    for (int i = 2; i <= smaller; i++) {
        if (a % i == 0 && b % i == 0) {
            scd = i;
            break;
        }
    }

    if (scd == -1)
        printf("Smallest Common Divisor: No common divisor other than 1\n");
    else
        printf("Smallest Common Divisor: %d\n", scd);

    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    printf("Greatest Common Divisor (GCD): %d\n", x);

    return 0;
}