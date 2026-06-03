//Write a program to Check perfect number
#include <stdio.h>
int main(){
    int num,divSum=0;

    printf("Enter number: ");
    scanf("%d",&num);

    for(int i=1;i<num;i++){
        if(num%i==0){
            divSum+=i;
        }
    }

    if(divSum==num){
        printf("Number is a perfect number");
    }

    else
        printf("Number is not a perfect number");

    return 0;

}