//Write a program to Convert decimal to binary. 
#include <stdio.h>
int main(){
    int num,bin=0,position=1,rem;

    printf("Enter the decimal number: ");
    scanf("%d",&num);

    int temp=num;
    while(temp>0){
        rem=temp%2;
        bin=bin+rem*position;
        position*=10;
        temp/=2;

    }

    printf("Binary number is :%d",bin);
}