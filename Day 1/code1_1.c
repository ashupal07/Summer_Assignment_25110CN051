//Write a program to Calculate sum of first N natural numbers
#include <stdio.h>
int main(){
    int n,num=0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int i=1;
    while (i<=n){
        num+=i;
        i++;

    }

    printf("Sum of n numbers is %d",num);
    


    return 0;
}