//ANKIT KUMAR -> 2331079
//10. WAP to implement Binary Search
#include<stdio.h>
int binarySearch(int arr[],int size,int key){
    int start=0,end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={5,8,13,58,69,96};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Enter element to find in array : ");
    int key;
    scanf("%d",&key);
    int check=binarySearch(arr,size,key);
    if(check==-1){
        printf("Element not found in array!.\n");
    }
    else{
        printf("%d found at %d index in array!..\n",key,check);
    }
    return 0;
}