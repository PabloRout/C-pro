// WAP to compute the sum of the first n term of following serise
//  s = 1-2 + 3-4 + 5-6 .......

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
