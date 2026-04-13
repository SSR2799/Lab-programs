#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, i = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long temp = binary;
    while (temp > 0) {
        int digit = temp % 10;
        decimal += digit * pow(2, i);
        temp /= 10;
        i++;
    }

    printf("Decimal equivalent = %d\n", decimal);

    return 0;
}