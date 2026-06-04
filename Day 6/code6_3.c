//Write a program to Count set bits in a number
//(set bits are the no of ones in the binary format of that number)
#include <stdio.h>
int main(){
    int num,bit=0;

    printf("Enter number ");
    scanf("%d",&num);

    while(num>0){
        if(num%2==1){
            bit++;
        }
        num/=2;   
    }
    printf("Set bits of is: %d",bit);

    return 0;
}