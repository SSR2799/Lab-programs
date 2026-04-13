#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    printf("Digits in reverse order: ");
    while (n > 0) {
        printf("%d ", n % 10);
        n /= 10;
    }
    printf("\n");

    return 0;
}