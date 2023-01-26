/*The function is used for concatenation of two string if first string is "king"
and second string is "size" the after using this function the first string becomes
"kingsize"
          The null charecter from the first string is removed,and the second string
          is added at the end of first string the second string remains unaffected 
          This function takes pointer to two string as arguments and returns a 
          pointer to the first string.*/
          
#include<stdio.h>
#include<conio.h>
#include<string.h>
    void main()
{
    char str1[10],str2[10];
    printf("Enter the first string: ");
    scanf("%s",&str1);
    printf("Enter the second string: ");
    scanf("%s",&str2);
    printf("first string is %s\t\tThe second string is %s\n",str1,str2 );
    strcat(str1,str2);
    printf("first string is %s\t\tThe second string is %s\n",str1,str2 );

getch ();
}