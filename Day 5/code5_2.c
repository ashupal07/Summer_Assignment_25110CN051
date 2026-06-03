//Write a program to Check strong number
#include <stdio.h>
int main(){
    int num,temp,fact,digit,result=0,i;
    printf("Enter number: ");
    scanf("%d",&num);

    temp=num;
    while(temp>0){
        digit =temp%10;
        temp/=10;
        fact=1;
        for(i=1;i<=digit;i++){
            fact*=i;
        }
        result+=fact;
    }
    if(num==result){
        printf("This is strong number");

    }
    else{
        printf("This is not a strong number ");

    }
    return 0;

}