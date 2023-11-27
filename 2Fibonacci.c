//ANKIT KUMAR -> 2331079
//02. WAP to Print Fibonacci Series
#include<stdio.h>
void fibonacci(int n){
    long long first=1,second=1,next=2;
    for(int i=0;i<n;i++){
        printf("%lld ",first);
        first=second;
        second=next;
        next=first+second;
    }
}
int main() {
    printf("Enter the number of terms for Fibonacci Series : ");
    int n;
    scanf("%d",&n);
    fibonacci(n);
    return 0 ;
}