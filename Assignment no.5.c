#include <stdio.h>
#include <math.h>

#define MAX 10


void addMatrices(int r, int c) {
    int A[MAX][MAX], B[MAX][MAX], sum[MAX][MAX];

    printf("\nEnter elements of Matrix A (%dx%d):\n", r, c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of Matrix B (%dx%d):\n", r, c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum[i][j] = A[i][j] + B[i][j];

    printf("\nMatrix A:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) printf("%4d", A[i][j]);
        printf("\n");
    }
    printf("\nMatrix B:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) printf("%4d", B[i][j]);
        printf("\n");
    }
    printf("\nSum (A + B):\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) printf("%4d", sum[i][j]);
        printf("\n");
    }
}



void saddlePoint(int r, int c) {
    int A[MAX][MAX];
    int found = 0;

    printf("\nEnter elements of the %dx%d matrix:\n", r, c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    printf("\nMatrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) printf("%4d", A[i][j]);
        printf("\n");
    }

    for (int i = 0; i < r; i++) {
        // Find minimum in row i
        int minVal = A[i][0], minCol = 0;
        for (int j = 1; j < c; j++) {
            if (A[i][j] < minVal) {
                minVal = A[i][j];
                minCol = j;
            }
        }
        int isMax = 1;
        for (int k = 0; k < r; k++) {
            if (A[k][minCol] > minVal) {
                isMax = 0;
                break;
            }
        }
        if (isMax) {
            printf("\nSaddle point found: A[%d][%d] = %d\n", i + 1, minCol + 1, minVal);
            found = 1;
        }
    }
    if (!found)
        printf("\nNo saddle point exists in this matrix.\n");
}
void inverseMatrix(int n) {
    float a[MAX][MAX], inv[MAX][MAX];
    float ratio;

    printf("\nEnter elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%f", &a[i][j]);

    // Build identity matrix
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            inv[i][j] = (i == j) ? 1.0 : 0.0;

    
    for (int i = 0; i < n; i++) {
        if (a[i][i] == 0) {
            printf("\nMatrix is singular. Inverse does not exist.\n");
            return;
        }
        for (int j = 0; j < n; j++) {
            if (i != j) {
                ratio = a[j][i] / a[i][i];
                for (int k = 0; k < n; k++) {
                    a[j][k]   -= ratio * a[i][k];
                    inv[j][k] -= ratio * inv[i][k];
                }
            }
        }
    }

    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            inv[i][j] /= a[i][i];

    printf("\nInverse of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%10.4f", inv[i][j]);
        printf("\n");
    }
}


void magicSquare(int n) {
    int A[MAX][MAX];
    int rowSum[MAX], colSum[MAX], diag1 = 0, diag2 = 0;

    printf("\nEnter elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("\nMatrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%4d", A[i][j]);
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        rowSum[i] = 0;
        colSum[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rowSum[i] += A[i][j];
            colSum[j] += A[i][j];
        }
        diag1 += A[i][i];
        diag2 += A[i][n - 1 - i];
    }

    int magic = rowSum[0];
    int isMagic = 1;

    printf("\nMagic Sum (expected) = %d\n", magic);
    for (int i = 0; i < n; i++) {
        if (rowSum[i] != magic || colSum[i] != magic) {
            isMagic = 0;
            break;
        }
    }
    if (diag1 != magic || diag2 != magic) isMagic = 0;

    if (isMagic)
        printf("The matrix IS a Magic Square.\n");
    else
        printf("The matrix is NOT a Magic Square.\n");
}




int main() {
    int choice, r, c, n;

    printf("=== Basic Matrix Operations ===\n");
    printf("1. Addition of Two Matrices\n");
    printf("2. Saddle Point of a Matrix\n");
    printf("3. Inverse of a Matrix\n");
    printf("4. Magic Square Check\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);
            addMatrices(r, c);
            break;
        case 2:
            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);
            saddlePoint(r, c);
            break;
        case 3:
            printf("Enter order of square matrix (n): ");
            scanf("%d", &n);
            inverseMatrix(n);
            break;
        case 4:
            printf("Enter order of square matrix (n): ");
            scanf("%d", &n);
            magicSquare(n);
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}



