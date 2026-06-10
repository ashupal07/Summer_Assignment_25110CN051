/*
Write a program to Print number pyramid.
    1
   121
  12321
 1234321
123454321
*/
#include <stdio.h>
int main(){
    for (int i=0;i<5;i++){
        for(int j=0;j<5+i;j++){
            if(i+j<4){
                printf(" ");
            }
            else if(j<5){
                printf("%d",i+j-3);
            }
            else{
                printf("%d",i-j+5);
            }
        }
        printf("\n");
    }
}