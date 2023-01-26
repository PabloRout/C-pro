#include<stdio.h>
#include<conio.h>
   void main()
{
   int year;
   printf("Enter the number you want to check");
   scanf("%d",&year);

     if(year%4==0)
       printf("this is a leap year");
     else if(year%100==0)
       printf("this is a leap year");
     else
       printf("This is not a leap year");

   getch();
}