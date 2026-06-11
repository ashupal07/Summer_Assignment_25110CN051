//Write a program to Write function to find maximum
#include <iostream>
using namespace std;

int maxNum(int a ,int b){
    if(a>b){
        return a;
    }
    else return b;
}

int main(){

    int a,b;

    cout << "Enter number: "<< endl;
    cin >> a;
    cout << "Enter number: "<< endl;
    cin >> b;
    cout <<"The greater number is "<< maxNum(a,b) << endl;
}
