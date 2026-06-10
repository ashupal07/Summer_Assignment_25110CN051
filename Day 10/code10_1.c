/*
Write a program to Print star pyramid
    *
   ***
  *****
 *******
*********
*/
#include <stdio.h>
int main(){
    for (int i=0;i<5;i++){
        for(int j=0;j<5+i;j++){
            if(i+j<4){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}