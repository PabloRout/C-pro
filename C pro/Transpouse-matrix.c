#include <stdio.h>
int main()
{
    int x,y;
    printf("\t\t\t***Enter the row and column of matrix***\n\n");
    printf("\nROWS-: ");
    scanf("%d",&x);
    printf("\nCOLUMN-: ");
    scanf("%d",&y);
    int matrix1[x][y];
    int matrix2[y][x];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element ",matrix1[i][j]);
            scanf("%d",&matrix1[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix2[j][i] = matrix1[i][j];
        }
    }
 
    for (int i = 0; i < 4; i++)
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
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
