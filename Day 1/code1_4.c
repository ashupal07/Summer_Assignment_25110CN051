//Write a program to Count digits in a number
#include <stdio.h>
int main (){
    int digit=0,num;

    printf("Enter number:");
    scanf("%d",&num);

    while(num>0){
        digit++;
        num/=10;
    }
    printf("no if digits is: %d",digit);

    return 0;

}