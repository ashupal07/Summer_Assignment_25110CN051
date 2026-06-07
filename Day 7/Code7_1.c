//Write a program to Recursive factorial.
#include <stdio.h>

int fact(int a);//function decleration

int fact(int a){//function defination
        
        if(a==1){//base condition
            return 1;
        }
        else{
            return a*fact(a-1);//reccursion
        }
}  
int main(){
        int num;

        printf("Enter number:");
        scanf("%d",&num);

        printf("Factorial is : %d",fact(num));// function calling 
        
    return 0;

}