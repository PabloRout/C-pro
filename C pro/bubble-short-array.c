#include<stdio.h>
    int main()
{
    int a[10];
    int i,j,temp;

    for ( i = 0; i < 10; i++)
    {  
       scanf("%d",&a[i]);  
    }
    for (i = 0; i < 10-1; i++)
    {
        for (j = 0; j < 10-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }   
        }    
    }
    printf("shorted aray is \n");

    for ( i = 0; i < 10; i++)
    {
        printf("\t%d",a[i]);
        printf("\n");
    }
    

    
return 0;
}