//ANKIT KUMAR -> 2331079
//14. WAP to implement Bubble Sort
#include<stdio.h>
void bubbleSort(int arr[], int n)
{
    int check;
    for (int i = n - 1; i >= 1; i--)
    {
        check = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                check = 0;
            }
        }
        if (check == 1 && i == 0)
        {
            printf("Array is already sorted\n");
            break;
        }
        else if (check == 1)
        {
            printf("Array is sorted by %d iteration\n", n - i);
            break;
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[] = {1,6,8,13,29,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}