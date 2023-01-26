#include<stdio.h>
    int main()
{
    // 0 1 1 2 3 5 8 13...n
    int c,n,a=0,b=1;
    printf("Enter number of tearm: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf(" %d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    
return 0;
}