#include<stdio.h>
int main()
{
    int row;
    printf("enter pyramid length\n");
    scanf("%d",&row);
   
   
   for(int i = 1;i<= row;i++)
  {
     for(int j = 1;j<=i;j++)
    {
       printf("_%d",j);
    }
       printf("\n");  
  }  
     return 0;   
}