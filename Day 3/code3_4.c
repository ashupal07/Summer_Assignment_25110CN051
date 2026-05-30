//Write a program to Find LCM of two numbers
#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter the number: ");
    scanf("%d %d",&num1,&num2);

    for(int i=2;i<=num1;i++){
        if(num1%i==0 && num2%i==0){
            printf("LCM is %d",i);
            break;
        }
    }


    return 0;
}