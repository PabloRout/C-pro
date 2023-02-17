#include <stdio.h>

int main() {
   int array[10];
   int i;

   for(i = 0; i < 10; i++)
   {
      scanf("%d",&array[i]);
   }  
   for(i = 9; i >= 0; i--)
   {
      printf("%d ", array[i]);
   }  
   return 0;
}
