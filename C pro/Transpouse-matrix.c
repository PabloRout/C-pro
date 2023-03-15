#include <stdio.h>
int main()
{
    int matrix1[3][3];
    int matrix2[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element ",matrix1[i][j]);
            scanf("%d",&matrix1[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix2[j][i] = matrix1[i][j];
        }
    }
 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nthe transpose of the matrix is given below\n\n\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
