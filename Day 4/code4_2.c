//Write a program to Find nth Fibonacci term
#include <stdio.h>
int main(){
    int n,n1,n2,n3;
    n1=0;
    n2=1;
    
    printf("Enter Nth term: ");
    scanf("%d",&n);

    for(int i=3;i<=n;i++){
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    printf("The %d term of fibonacci series is %d",n ,n3);

    return 0;

}