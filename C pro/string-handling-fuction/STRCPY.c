/*
Theis function use for coping one string to anothe 
string(str1,srtr2)sopies str2 to str1. here str2 is
the source string and the str1 is destination string.
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
    void main()
{
    char str1[10],str2[10];
    printf("Enter the first string ");
    scanf("%s",&str1);
    printf("Enter the second string ");
    scanf("%s",&str2);

    printf("first string %s%s\n",str1,str2);
    printf("second string %s\n",str2);
    strcpy(str1,str2);
    
    printf("first string %s\n",str1);
    printf("second string %s\n",str2);


getch ();
}