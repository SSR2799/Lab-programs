#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50], desig[50], gen[10], doj[15];
    float sal;
};

int main() {
    int n, m = 0, f = 0;
    struct EMPLOYEE e[100];

    printf("Enter count: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid employee count.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter employee %d details (name designation gender doj salary): ", i + 1);
        if (scanf("%49s %49s %9s %14s %f", e[i].name, e[i].desig, e[i].gen, e[i].doj, &e[i].sal) != 5) {
            printf("Invalid input for employee %d.\n", i + 1);
            return 1;
        }

        if (strcmp(e[i].gen, "Male") == 0)
            m++;
        else
            f++;

        if (e[i].sal > 10000)
            printf("High salary: %s\n", e[i].name);
    }

    printf("Total: %d, Male: %d, Female: %d\n", n, m, f);
    return 0;
}
