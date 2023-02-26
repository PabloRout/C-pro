#include<stdio.h>
void binary(long n);
int main(){
    
    long n;
    printf("enter the number");
    scanf("%d",&n);
    binary(n);
  return 0;  
    }void binary(long n){
     long rem,a = 1,bin = 0;
     while(n >0)   
      {
          
          
          rem = n%2;
          bin = bin+rem *a;
          n = n/2;
          a = a*10;
          
          }
          printf("the binary is = %d",bin);  
    }