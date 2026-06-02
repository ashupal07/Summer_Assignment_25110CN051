//Write a program to Generate Fibonacci series
#include <stdio.h>
int main(){
    int n,n1,n2,n3;
    n1=0;
    n2=1;
    
    printf("Enter number upto which series u want: ");
    scanf("%d",&n);
    
    while(n>=n1){
        printf("%d ",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    
    }

    return 0;
}