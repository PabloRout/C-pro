/*
like this(take numbers of line from user )
*
***
*****
*******
*/

#include<stdio.h>
    int main()
{
    int i,j,row;
    printf("enter no of row required ");
    scanf("%d",&row);
    for(i=1;i<=row;i=i+2)
    {
        for(j=0;j<i;j=j+2)
        {
            printf("%c",'*');
        }
        printf("\n");
    }
return 0;
}