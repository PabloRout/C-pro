// WAP_print_the_even-valued_elements
#include<stdio.h>
    int main()
{
    int i,num[10];
    for ( i = 0; i < 10; i++)
    {
        printf("Enter the %dth number: \n",i);
        scanf("%d",&num[i]);
    }
    printf("Even numbers are: ");
    for ( i = 0; i < 10; i++)
    {
        if (num[i]%2==0)
        {
            printf("\n%d",num[i]);
        }
        
    }
  
return 0;
}