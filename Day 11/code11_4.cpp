//Write a program to Write function to find factorial
#include <iostream>
using namespace std;

int fact(int a){
    for(int i=a-1;i>1;i--){
        a*=i;
    }
    return a;
}
int main(){
    int num;

    cout<< "Enter number: ";
    cin>>num;
    cout<<"Factorial of "<< num << " is "<< fact(num);

    return 0;
}