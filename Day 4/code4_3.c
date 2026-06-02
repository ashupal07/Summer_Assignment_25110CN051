//Write a program to Check Armstrong number
#include <stdio.h>
#include <math.h>

int main(){
    int num,digits=0,result=0;
    
    printf("Enter the number: ");
    scanf("%d",&num);
    
    int dnum=num;
    while(dnum>0){
        dnum/=10;
        digits++;
    }
    //printf("No of digits is %d",digits);

    int arm=num;
    while(arm>0){
        result+=pow(arm%10,digits);
        arm/=10;
    }
    if(num==result){
        printf("Number is armstrong");
    }
    else{
        printf("Number is not armstrong");
    }
    return 0;

}