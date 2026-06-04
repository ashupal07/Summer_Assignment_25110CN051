//Write a program to Convert decimal to binary. 
#include <stdio.h>
int main(){
    int num,bin=0,result;

    printf("Enter the decimal number: ");
    scanf("%d",&num);

    int temp=num;
    while(temp>0){
        bin=bin*10+temp%2;
        temp/=2;

    }

    result=temp=0;
    while(bin>0){
        temp=bin%10;
        result=result*10+temp;
        bin/=10;

    }
    printf("Binary number is :%d",result);
}