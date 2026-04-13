#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    printf("Enter how many random numbers you want: ");
    scanf("%d", &n);

    srand(time(0));

    printf("Pseudo Random Numbers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rand());
    }
    printf("\n");

    return 0;
}