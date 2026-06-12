//Write a program to Write function for perfect number
#include <iostream>
using namespace std;

void perfectNum(int num){
    int div=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            div+=i;
        }
    }
    if(div==num){
        cout<<"Number is perfect number ";
    }
    else{
        cout<<"Number is not perfect number ";
    }
}
int main(){
    int num;
    cout << "Enter number : ";
    cin >> num;
    perfectNum(num);
    return 0;
}