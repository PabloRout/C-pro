#include<stdio.h>
    int main()
{
    int num,t,sum=0,mul=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (num>0)
    {
        t=num%10;
        sum=sum+t;
        mul=mul*t;
        num=num/10;

    }
    printf("the sum digits is %d",sum);
    printf("the multiplication digits is %d",mul);
    
return 0;
}