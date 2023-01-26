#include<stdio.h>
    int main()
{
    int a[100],size,i,max,min;
    printf("\nEnter size of array(0-100): ");
    scanf("%d",&size);
    for ( i = 0; i <=size; i++)
    {
        printf("\nEnter the %dth element: ",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for ( i = 0; i < size; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        else if (a[i]<min)
        {
            min=a[i];
        }
        
        
    }
    printf("\nMaximum value of array is %d",max);
    printf("\nMaximum value of array is %d",min);

return 0;
}
