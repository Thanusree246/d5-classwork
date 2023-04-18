#include <stdio.h>

int main()
{
    int rows1, cols1, rows2, cols2;
    int mat1[10][10], mat2[10][10];
    int i, j, flag = 1;
    
    printf("Enter the number of rows and columns of the 1st matrix: ");
    scanf("%d %d", &rows1, &cols1);
    
    printf("Enter the number of rows and columns of the 2nd matrix: ");
    scanf("%d %d", &rows2, &cols2);
    
    if(rows1 != rows2 || cols1 != cols2)
    {
        printf("Matrices are not equal.\n");
        return 0;
    }
    
    printf("Enter elements in the 1st matrix:\n");
    for(i=0; i<rows1; i++)
    {
        for(j=0; j<cols1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter elements in the 2nd matrix:\n");
    for(i=0; i<rows2; i++)
    {
        for(j=0; j<cols2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    for(i=0; i<rows1; i++)
    {
        for(j=0; j<cols1; j++)
        {
            if(mat1[i][j] != mat2[i][j])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
    
    if(flag == 1)
    {
        printf("The matrices can be compared : Two matrices are equal.\n");
    }
    else
    {
        printf("Matrices are not equal.\n");
    }
    
    return 0;
}




