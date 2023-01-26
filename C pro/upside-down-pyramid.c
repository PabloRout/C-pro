#include<stdio.h>
int main()
{
    int row;
    printf("enter a row\n");
    scanf("%d",&row);
   
    for(int i =0;i<row;i++)
    {
        for(int j = row;j>i;j--)
        {
            printf("*");
        }
        
        printf("\n");
    }
 return 0;   
}