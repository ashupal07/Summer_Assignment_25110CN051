//Write a program to Recursive Fibonacci
#include <stdio.h>

int fib(int );

int fib(int n){
    if (n==1){
        return 0;
    }
    if (n==2){
        return 1;
    }
    else{
    return fib(n-1)+fib(n-2);
    }
}
int main(){
    int num;
    printf("Enter number of terms: ");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        printf("%d\t",fib(i));
    }

    return 0;
}