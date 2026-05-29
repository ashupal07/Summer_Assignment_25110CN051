//Write a program to Find product of digits
#include <stdio.h>
int main(){
    int pdt=1,num;

    printf("Enter number: ");
    scanf("%d",&num);

    while(num>0){
        pdt*=num%10;
        num/=10;

    }
    printf("Product of the number is %d",pdt);

    return 0;

}