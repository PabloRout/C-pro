/*
-->this function use for comparison of two string
-->if the two string match,strcmp()return a 
value 0,other wise it return a non-zero value.

    strcmp(s1,s2)return a value-
    <0 when s1<s2
    =0 when s1==s2
    >0 when s1>s2

*/




#include<stdio.h>
#include<conio.h>
#include<string.h>
    void main()
{
    char str1[10],str2[10];
    printf("Enter the first string:  ");
    scanf("%s",str1);
    printf("Enter the second string:  ");
    scanf("%s",str2);
    if (strcmp(str1,str2)==0)
    {
        printf("THE TWO STRINGS ARE SAME\n ");
    }
    else
    {
        printf("FUCK YOU \n");
    }
    
    
getch ();
}