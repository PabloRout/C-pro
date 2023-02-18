#include <stdio.h>

int main() 
{
    int arr[10];

    printf("Enter an array: ");
    for (int i = 0; i< 10; i++){
        scanf("%d", &arr[i]);
    }

    // Printing the reverse of the array
    printf("Reversed array: ");
    for (int i = 10-1; i>=0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}