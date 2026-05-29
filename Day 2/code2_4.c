//Write a program to Check whether a number is palindrome
#include <stdio.h>
int main(){
    int num,rev=0,digit,temp;
    
    printf("Enter number: ");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        digit=temp%10;
        rev=rev*10+digit;
        temp/=10;
    }
    if(num==rev){
        printf("Number is palindrome");

    }
    else{
        printf("Number is not palindrome");

    }

    return 0;

}