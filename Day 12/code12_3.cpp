//Write a program to Write function for Fibonacci
#include <iostream>
using namespace std;
void fibonacci(int term){
    int n1,n2,n3;
    n1=0;
    n2=1;
    for(int i=1;i<=term;i++){
        n3=n1+n2;
        cout << n1<<" ";
        n1=n2;
        n2=n3;
    }
}
int main(){
    int num;
    cout<<"Enter number of terms: ";
    cin>>num;
    fibonacci(num);
    return 0;
}