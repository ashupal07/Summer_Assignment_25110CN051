//Write a program to Convert binary to decimal
#include <stdio.h>
#include <math.h>

int main(){
    int decimal=0,num,digit,i=0;

    printf("Enter Binary number: ");
    scanf("%d",&num);

    while(num>0){
        digit=num%10;
        decimal=decimal+digit*pow(2,i);
        i++;
        num/=10;
    }
    printf("Decimal bumber is: %d",decimal);
    return 0;
}