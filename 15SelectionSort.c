//ANKIT KUMAR -> 2331079
//15. WAP to implement Selection Sort
#include<stdio.h>
void selectionSort(int arr[], int n){
    for (int i = 0; i <= n - 2; i++){
        int minPos = i;
        for (int j = i; j <= n - 1; j++){
            if (arr[minPos] > arr[j]){
                minPos = j;
            }
        }
        int temp = arr[minPos];
        arr[minPos] = arr[i];
        arr[i] = temp;
    }
}
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int arr[] = {12,71,18,3,9,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}