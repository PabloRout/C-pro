#include<stdio.h>
    int main()
{
    int n,copy,c,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    copy=n;
    while (copy>0)
    {
        c=copy%10;
        sum=sum+c*c*c;
        copy=copy/10;
    }
    if (sum==n)
    {
        printf("%d is a amstrong number",n);

    }
    else
        Printf("%d is not amstrong number",n);  

return 0;
}