//ANKIT KUMAR -> 2331079
//01. WAP to find Factorial of a number.
#define lld long long
lld factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
#include<stdio.h>
int main() {
    printf("Enter a number [1,20] to find its Factorial : ");
    int n;
    scanf("%d",&n);
    printf("Factorial of %d is : %lld",n,factorial(n));
    return 0 ;
}