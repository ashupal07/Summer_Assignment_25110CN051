//Write a program to Recursive sum of digits
#include <stdio.h>
int sDigit(int);

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    printf("%d",sDigit(num));

    return 0;

}
int sDigit (int n){
    
    if(n<10){   
        return n;
    }
    else{
        return sDigit(n/10)+n%10;
    }
}