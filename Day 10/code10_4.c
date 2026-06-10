/*
Write a program to Print character pyramid
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
#include <stdio.h>
int main(){
    for (int i=0;i<5;i++){
        for(int j=0;j<5+i;j++){
            if(i+j<4){
                printf(" ");
            }
            else if(j<5){
                printf("%c",64+i+j-3);
            }
            else{
                printf("%c",64+i-j+5);
            }
        }
        printf("\n");
    }
}