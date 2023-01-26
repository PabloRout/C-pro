#include<stdio.h>
int main(){
    int size,great;
    printf("enter the array size\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array's information\n");
    for(int i =0;i<size;i++){
        printf("enter the %d th element\n",i);
        scanf("%d",&arr[i]);
        }
        great = arr[0];
        for(int i  = 0;i<size;i++){
            
           if(arr[i]>great){
            
            great = arr[i];
            } 
            
            }
            
        printf("the greatest in this array is = %d",great);
   return 0; 
    }

