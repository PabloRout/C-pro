// cheak weather a number is prime number or not by using function
#include<stdio.h>
void prime(int);
    int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    prime(n);


    return 0;
}

    void prime(int n)
    {
    int count=0;
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }
    if (count==2)
    
    {
        printf("The number is prime");
    }
    else
    printf("the number is not prime");
    
}