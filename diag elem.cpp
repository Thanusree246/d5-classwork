#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int num_rows, num_cols;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &num_rows, &num_cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The diagonal elements of the matrix are: ");
    for (int i = 0; i < num_rows && i < num_cols; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    return 0;
}




