//ANKIT KUMAR -> 2331079
//08. WAP to insert at specific position in an Array
#include<stdio.h>
#define maxSize 50
void insert(int[],int,int*);
void display(int[],int);
int main() {
    int arr[maxSize]={95,48,90,10,15};
    int currSize=5;
    printf("Before Insertion : \n");
    display(arr,currSize);
    printf("Enter position to insert an element: ");
    int n;
    scanf("%d",&n);
    insert(arr,n,&currSize);
    printf("After Insertion : \n");
    display(arr,currSize);
    return 0 ;
}
void insert(int arr[],int position,int* size) {
    if (*size >= maxSize || position <= 0 || position-1 > *size) {
        printf("Invalid position or array is full. Cannot insert element.\n");
    }
    else{
        printf("Enter element to insert : ");
        int key;
        scanf("%d",&key);
        for(int i=*size;i>=position-1;i--){
            arr[i]=arr[i-1];
        }
        arr[position-1]=key;
        (*size)++;
    }
}
void display(int arr[],int currSize){
    for(int i=0;i<currSize;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}