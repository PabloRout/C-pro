/*Write a program in which a function is passed 
address of two variables and then alter its contents.*/

#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a=10,b=20;
    printf("\nBefore swap the value of a=%d,b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swap the value of a=%d,b=%d",a,b);

    return 0;
}
void swap(int* x,int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}