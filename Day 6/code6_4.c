//Write a program to Find x^n without pow()
#include <stdio.h>
int main(){
    int x,n,ans=1;
    printf("finding value of x^n\n");
    printf("Enter the number:");
    scanf("%d",&x);
    printf("Enter power of the number :");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        ans*=x;
    }
    printf("The value of x^n is: %d",ans);

    return 0;
}