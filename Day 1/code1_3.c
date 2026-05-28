//Write a program to Find factorial of a number
#include <stdio.h>
int main(){
    int n,fact;

    printf("Enter number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d",fact);

    return 0;

}
