// Write a Program to find greatest among three numbers.

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter Three Numbers\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if ((num1 > num2) && (num1 > num3))
    {
        printf("%d Is Greatest Among Three Number", num1);
    }
    else if ((num2 > num1) && (num2 > num3))
    {
        printf("%d Is Greatest Among Three Number", num2);
    }
    else
    {
        printf("%d Is Greatest Among Three Number", num3);
    }

    return 0;
}

// using nested if else
// #include<stdio.h>
//     int main()
// {
//     int a,b,c;
//     printf("enter three number: ");
//     scanf("%d%d%d",&a,&b,&c);
//     if (a>b)
//     {
//         if (a>c)
//         {
//             printf("greatest number is %d",a);
//         }
//         else
//             printf("greatest number is %d",c);  
//     }
//     else
//         {
//             if(b>c)
//             {
//                 printf("greatest number is %d",b);
//             }
//             else    
//                 printf("greatest number is %d",c);
            
//         }
// return 0;
// }