//ANKIT KUMAR -> 2331079
//07. WAP to insert in unsorted Array
#include<stdio.h>
#define maxSize 50
void insert(int[],int,int*);
void display(int[],int);
int main() {
    int arr[maxSize]={95,48,90,10,15};
    int currSize=5;
    printf("Before Insertion : \n");
    display(arr,currSize);
    printf("Enter element to insert : ");
    int key;
    scanf("%d",&key);
    insert(arr,key,&currSize);
    printf("After Insertion : \n");
    display(arr,currSize);
    return 0 ;
}
void insert(int arr[],int key,int* currSize){
    if(*currSize>maxSize){
        printf("Array is full. Can't Insert!.\n");
    }
    else{
        arr[*currSize]=key;
        (*currSize)++;
    }
}
void display(int arr[],int currSize){
    for(int i=0;i<currSize;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}