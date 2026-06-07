/*Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE*/
#include <stdio.h>
int main(){
    int num;

    printf("Enter number of lines: ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        for(int j=0;j<i;j++){
            printf("%c",65+j);
        }
        printf("\n");
    }
    return 0;

}