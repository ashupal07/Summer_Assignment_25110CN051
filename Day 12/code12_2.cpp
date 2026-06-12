//Write a program to Write function for Armstrong
#include <iostream>
#include <cmath>
using namespace std;

int digits(int n){
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
    return count;
}
int armstrong(int num){
    int digit,arm=0;
    int power=digits(num);
    while(num>0){
        digit=num%10;
        arm+=pow(digit,power);
        num/=10;
    } 
    return arm;
}   
int main(){
    int num,result;
    cout<<"Enter number: ";
    cin>>num;
    result=armstrong(num);
    if (result==num){
        cout<<"Number is armstrong";
    }
    else{
        cout<<"Number is not armstrong";
    }
}