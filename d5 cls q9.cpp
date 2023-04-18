#include <stdio.h>

int main() {
    int rows, cols, i, j, isIdentity = 1;
    
    printf("Input number of Rows for the matrix: ");
    scanf("%d", &rows);
    
    printf("Input number of Columns for the matrix: ");
    scanf("%d", &cols);
    
    int matrix[rows][cols];
    
    printf("Input elements in the first matrix:\n");
    for(i=0; i<rows; i++) {
        for(j=0; j<cols; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("The matrix is:\n");
    for(i=0; i<rows; i++) {
        for(j=0; j<cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
   
    for(i=0; i<rows; i++) {
        for(j=0; j<cols; j++) {
            if(i == j && matrix[i][j] != 1) {
                isIdentity = 0;
                break;
            } else if(i != j && matrix[i][j] != 0) {
                isIdentity = 0;
                break;
            }
        }
    }
    
    if(isIdentity == 1) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }
    
    return 0;
}
