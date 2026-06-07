//Write a program to Recursive reverse number
#include <stdio.h>
int revNum(int n,int rev){
    if (n>0){
        return revNum(n/10,rev*10+(n%10));
    }
    else
        return rev;
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Reverse of a number is: %d",revNum(num,0) );
}