//Write a program to Find GCD of two numbers
#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter numbers : ");
    scanf("%d %d",&num1 ,&num2);

   

    for (int i=num1;i>=2;i--){
        if(num1%i==0 && num2%i==0){
            printf("%d",i);
            break;
        }
    }
    
    return 0;
}