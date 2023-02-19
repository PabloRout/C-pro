#include<stdio.h>
int main(){
   int n,temp = 0,sum = 0;
   
     printf("enter the sequence length\n");
    scanf("%d",&n);
    for(int i = 1,k=1 ; i <= n; i++,k=k+2){
      int j = 0;
      j = k+1;
      temp = k-j;
    sum = sum + temp;    
        }
        printf("\nthe answer is = %d",sum);
    
  return 0;  }