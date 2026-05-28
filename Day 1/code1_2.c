//Write a program to Print multiplication table of a given number.
#include <stdio.h>
int main(){
    int n,o;
    printf("Enter number: \n");
    scanf("%d",&n);
    for(int i =1;i<=10;i++){

        o=n*i;
        printf("%d*%d=%d\n",n,i,o);

    }

    return 0;

}