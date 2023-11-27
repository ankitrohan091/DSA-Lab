//ANKIT KUMAR -> 2331079
//17. WAP to implement Merge Sort
#include <stdio.h>
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void merge(int arr[],int low,int mid,int high){
    int temp[high-low+1];
    int left=low;
    int right=mid+1;
    int i=0;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp[i]=arr[left];
            left++;
        }
        else{
            temp[i]=arr[right];
            right++;
        }
        i++;
    }
    while(left<=mid){
        temp[i]=arr[left];
        left++;
        i++;
    }
    while(right<=high){
        temp[i]=arr[right];
        right++;
        i++;
    }
    for(int index=low,i=0;index<=high;index++,i++){
        arr[index]=temp[i];
    }
}
void mergeSort(int arr[],int low,int high){
    if(low>=high){
        return;
    }
    int mid=low+(high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main()
{
    int arr[] = {11,2,89,74,56,63};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr,0,size-1);
    printf("Sorted array: \n");
    printArray(arr, size);
}
//O(nlogn) -> Time Complexity
//O(n)  ->  Space Complexity