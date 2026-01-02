//Write a C program to read two matrices and perform matrix addition using a 2-D array.
#include <stdio.h>
#define MAX 10

int main() {
    int matrix1[MAX][MAX], matrix2[MAX][MAX], sum[MAX][MAX];
    int row, col, i, j;

    printf("Enter number of rows (max %d): ", MAX);
    scanf("%d", &row);
    printf("Enter number of columns (max %d): ", MAX);
    scanf("%d", &col);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}