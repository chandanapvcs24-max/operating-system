#include <stdio.h>

int main() {
    int i, j, rows, cols;
    int matrix[100][100];
    int rowSum, colSum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(i = 0; i < rows; i++) {
        rowSum = 0;
        for(j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }

   
    for(j = 0; j < cols; j++) {
        colSum = 0;
        for(i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}