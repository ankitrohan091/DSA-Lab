//ANKIT KUMAR -> 2331079
//06. WAP to implement Linear Search in unsorted Array
#include<stdio.h>
int linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(key == arr[i])
            return i;
    }
    return -1;
}
int main(){
    int arr[]={12,34,10,6,40};
    int n= sizeof(arr) / sizeof(arr[0]);
    printf("Enter key value to find in array : ");
    int key;
    scanf("%d",&key);
    int index = linearSearch(arr,n,key);
    if(index != -1){
        printf("Element %d found at index  : %d",key,index);
    }
    else{
        printf("Element %d not found in array...",key);
    }
    return 0;
}