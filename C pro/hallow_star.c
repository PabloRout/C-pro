#include<stdio.h>
int main(){
    int row;
    printf("enter a row\n");
    scanf("%d",&row);
   
    for(int i = 0;i<row;i++){
        for(int j = 0;j<row;j++)
        {
            if(i ==0|| j ==0 || i==row-1|| j == row-1){
            printf("* ");}else{
                printf("  ");
                }
            
            }
            printf("\n");
            }
 return 0;   
    }