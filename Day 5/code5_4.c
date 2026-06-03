//Write a program to Find largest prime factor
#include <stdio.h>
int main(){
    int num,temp;
    printf("Enter the number:");
    scanf("%d",&num);

    for(int i=num-1;i>=1;i--){
        if(num%i==0 ){
            temp=i;
            int count=0;
            for(temp=2;temp<i;temp++){
                if(i%temp==0){
                    count++;
                
                }
                
            }
            if(count==0){
                printf("The largest prime factor of %d is %d",num,i);
                break;
            }
        }
    }

    return 0;
}