//ANKIT KUMAR -> 2331079
//11. WAP to add two Matrices
#include<stdio.h>
int main(){
    int a[3][3]={4,3,9,5,4,8,14,56,25};            
    int b[3][3]={5,8,9,3,6,52,25};
    // 4  3  9     5  8  9      9  11  18
    // 5  4  8  +  3  6  52  =  8  10  60
    // 14 56 25    25 0  0      39 56  25
    int c[3][3];
    for(int row=0;row<3;row++){
        for(int column=0;column<3;column++){
            c[row][column]=a[row][column]+b[row][column];
            printf("%d ",c[row][column]);
        }
        printf("\n");
    }
    return 0;
}