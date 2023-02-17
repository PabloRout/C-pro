//calculate and print the sum and average of the elements of array

#include <stdio.h>
 
int main()
{
    int arr[10],sum=0;
    float avg;
    printf("Enter array elements\n");
 
    for(int i=0;i<10;i++)
    {    
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/10;
    printf("Sum of the array is: %d",sum);
    printf("\nAvg of the array is: %f",avg);
 
    return 0;
}