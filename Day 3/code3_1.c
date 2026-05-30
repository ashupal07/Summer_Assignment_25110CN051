//Write a program to Check whether a number is prime
#include <stdio.h>
int main(){
    int num,i;

    printf("Enter natural number: ");
    scanf("%d",&num);
    if(num>1){
        for(i=2;i<num;i++){
            if (num%i==0){
                printf("number is not prime");
                break;
            }
            else
                printf("Number is prime");
                break;
            

        }   
    }
    else 
        printf("Number is neither composite nor prime");
    return 0;

}