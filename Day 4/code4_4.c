//Write a program to Print Armstrong number in a range
#include <stdio.h>
#include <math.h>
int main(){
    int sRange,eRange;

    printf("Enter the starting range number: ");
    scanf("%d",&sRange);
    
    printf("Enter the end range number: ");
    scanf("%d",&eRange);

    //for full range
    for(int i=sRange;i<=eRange;i++){

        //count digit
        int dgt=i,digits=0;
        while(dgt>0){
            digits++;
            dgt/=10;
        }
        //armstrong condition
        int num=i,result=0;
        while(num>0){
            result+=pow(num%10,digits);
            num/=10;
        }
        //checking number 
        if(i==result){
            printf("%d ",result);
        }
        

    }
        
    return 0;
}