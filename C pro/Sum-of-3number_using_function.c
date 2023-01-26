/*sum of three number using function with paramiter and with return */
#include<stdio.h>
int sum(int x,int y,int z);
    int main()
{   
    
    int a,b,c,s;
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("Enter the 2st number: ");
    scanf("%d",&b);
    printf("Enter the 3st number: ");
    scanf("%d",&c);
    s=sum(a,b,c);
    printf("The sum of three given number is: %d",s);
return 0;
}
int sum(int x,int y,int z)
{
    int m;
    m=x+y+z;
    return (m);
}