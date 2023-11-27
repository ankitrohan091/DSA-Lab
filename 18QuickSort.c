//ANKIT KUMAR -> 2331079
//18. WAP to implement Quick Sort
#include<stdio.h>
#include<stdlib.h>
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int partition(int arr[],int si,int ei){
    int pivot=arr[ei];
    int i=si-1;
    for(int j=si;j<ei;j++){
        if(arr[j]<=pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    i++;
    int temp=pivot;
    arr[ei]=arr[i];
    arr[i]=temp;
    return i;
}
void quickSort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int pivotIndex=partition(arr,si,ei);
    quickSort(arr,si,pivotIndex-1);
    quickSort(arr,pivotIndex+1,ei);
}
int main() {
    int arr[]={5,7,34,2,8,54};
    int size=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,size-1);
    printArray(arr,size);
    return 0 ;
}