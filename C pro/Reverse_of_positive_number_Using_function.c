#include<stdio.h>
 int rev(int,int);
    int main()
{
    int a,n,g;
    printf("Enter the positive number ");
    scanf("%d",&a);
    g=rev(a,n);
return 0;
}
int rev(int a,int n)
{
    while (a>0)
    {
        n=a%10;
        printf("%d",n);
        a=a/10;
    }
return a;
}
