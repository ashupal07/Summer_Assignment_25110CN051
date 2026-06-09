/*
Write a program to Print repeated character
pattern.
A
BB
CCC
DDDD
EEEEE
*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter Number of lines: ");
    scanf("%d",&num);

    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            printf("%c",65+i);
        }
        printf("\n");
    }
    return 0;

}