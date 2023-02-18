// Write a Program to all arithmetic operation using switch case.

#include <stdio.h>

int main()
{
    int num1, num2;
    char op;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter operator eg ( + _ * / ): ");
    scanf(" %c", &op);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch (op)
    {
    case ('+'):
        printf("%d %c %d = %d", num1, op, num2, num1 + num2);
        break;

    case ('-'):
        printf("%d %c %d = %d", num1, op, num2, num1 - num2);
        break;

    case ('*'):
        printf("%d %c %d = %d", num1, op, num2, num1 * num2);
        break;

    case ('/'):
        printf("%d %c %d = %d", num1, op, num2, num1 / num2);
        break;
    default:
    printf("WRONG INPUT!");
    }

    return 0;
}




// #include<stdio.h>
//     int main()
// {
//     int a,b,op;
//     printf("Enter two numbers: \n");
//     scanf("%d%d",&a,&b);
//     printf(" 1-addition\n 2-substriction\n 3-multipliction\n 4-divisition");
//     printf("Enter your 1,2,3 or 4: ");
//     scanf("%d",&op);

//     switch (op)
//     {
//     case 1:
//         printf("%d + %d = %d",a,b,a+b);
//         break;
//     case 2:
//         printf("%d + %d = %d",a,b,a-b);
//         break;
//     case 3:
//         printf("%d + %d = %d",a,b,a*b);
//         break;
//     case 4:
//         printf("%d + %d = %d",a,b,a/b);
//         break;
    
//     default:
//         printf("Enter valid op ");
//         break;
//     }
    

// return 0;
// }
