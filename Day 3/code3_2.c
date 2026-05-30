//Write a program to Print prime numbers in a range
#include <stdio.h>
int main(){

    int st,end,p;
    printf("Enter range number: ");
    scanf("%d,%d",&st ,&end );

    for(st;st<=end;st++){
        p=1;
        for(int i=2;i<st;i++){
            
            if(st%i==0){//not prime
                p+=1;
            

            }
        }   
        if(p==1){//for not prime p>1
            printf("%d ",st);
        
        }
        
    }

    return 0;

}