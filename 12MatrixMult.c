//ANKIT KUMAR -> 2331079
//12. WAP to multiply two Matrices
#include<stdio.h>
int row=3,column=3;
void multiply(int a[row][column],int b[row][column]){
    int c[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            c[i][j]=0;
            for(int k=0;k<column;k++){
                c[i][j]+=a[i][k]*b[k][j]; 
            }//c[0][0] = (a[0][0]*b[0][0]) + (a[0][1]*b[1][0]) + (a[2][0]*b[0][2])
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
// 1  2  3     10  11  12      084  090  096
// 4  5  6  *  13  14  15  =   201  216  231
// 7  8  9     16  17  18      318  342  366
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={10,11,12,13,14,15,16,17,18};
    multiply(a,b);
    return 0;
}