/* The function returns thr length of the string i.e
   the number of characters in the string 
   exicuding the terminating null character.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
    void main()
{
    char str[7];
    int length;
    printf("Enter the string: ");
    scanf("%s",&str);
    length=strlen(str);
    printf("Length of the string is %d\n",length);
    getch ();
}