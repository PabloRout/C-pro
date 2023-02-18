#include <stdio.h>

void printEven(int arr[], int n) 
{
	int i;
    printf("Even-valued elements: ");
    for (i = 0; i < n; i++) 
	{
        if (arr[i] % 2 == 0) 
		{
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void printOdd(int arr[], int n) 
{
	int i;
    printf("Odd-valued elements: ");
    for (i = 0; i < n; i++) 
	{
        if (arr[i] % 2 != 0) 
		{
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void calcSumAndAvg(int arr[], int n)
 {
    int sum = 0,i;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    double avg = (double) sum / n;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);
}

void printMaxAndMin(int arr[], int n)
 {
 	int i;
    int max = arr[0];
    int min = arr[0];
    for (i = 1; i < n; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];
        }
        if (arr[i] < min) 
		{
            min = arr[i];
        }
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
}

void removeDuplicates(int arr[], int n) 
{
    int i, j = 0;
    for (i = 0; i < n; i++) 
	{
        if (i == 0 || arr[i] != arr[i-1]) 
		{
            arr[j++] = arr[i];
        }
    }
    n = j;
    printf("Array after removing duplicates: ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printReverse(int arr[], int n) 
{
	int i;
    printf("Array in reverse order: ");
    for (i = n-1; i >= 0; i--) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int i,choice = 1;
    while (choice != 0) 
	{
        printf("\nEnter your choice:\n");
        printf("1. Enter array\n");
        printf("2. Print even-valued elements\n");
        printf("3. Print odd-valued elements\n");
        printf("4. Calculate and print sum and average\n");
        printf("5. Print maximum and minimum element\n");
        printf("6. Remove duplicates from the array\n");
        printf("7. Print the array in reverse order\n");
        printf("0. Quit the program\n");
        printf("Choice: ");
        scanf("%d", &choice);

        static int arr[100], n;
        switch (choice) 
		{
            case 1:
                printf("Enter the size of the array: ");
                scanf("%d", &n);
                printf("Enter the elements of the array: ");
                for (i = 0; i < n; i++) 
				{
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                printEven(arr, n);
                break;
            case 3:
                printOdd(arr, n);
                break;
            case 4:
                calcSumAndAvg(arr, n);
                break;
            }
        }
    }

