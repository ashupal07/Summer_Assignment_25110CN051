//Write a program to Write function to find sum of two numbers
#include <iostream>
using namespace std;

int sum(int a,int b);

int sum(int a ,int b){
    int c=a+b;
    return c;
}

int main(){
    int a,b;
    cout << "Enter first number: " ;
    cin >> a ;
    cout << "Enter second number: " ;
    cin >> b ;

    cout << "Sum of two numbers is: "<< sum(a,b);
    return 0;
}