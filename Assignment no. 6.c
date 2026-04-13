#include <stdio.h>

int factorial_iterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

int factorial_recursive(int n) {
    if (n == 0)
        return 1;
    return n * factorial_recursive(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Iterative: %d\n", factorial_iterative(n));
    printf("Recursive: %d\n", factorial_recursive(n));
    return 0;
}