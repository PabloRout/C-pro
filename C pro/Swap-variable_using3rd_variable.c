#include<stdio.h>
    int main()
{
    int num1,num2,test;
    printf("Enter the 1st number: ");
    scanf("%d",&num1);
    printf("Enter the 2st number: ");
    scanf("%d",&num2);
    printf("Before swap num1=%d and num2=%d \n",num1,num2);
    test=num1;
    num1=num2;
    num2=test;
    printf("After swap num1=%d and num2=%d \n",num1,num2);
return 0;

}