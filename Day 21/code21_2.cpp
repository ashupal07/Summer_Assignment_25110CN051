//Write a program to Reverse a string
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"Enter string : ";
    cin>>str;
    int n=str.length();
    for(int i=0;i<n/2;i++){
        swap(str[i],str[n-1-i]);
    }
    //for printing resultant string
    for(int i=0;i<n;i++){
        cout<<str[i];
    }
        
    return 0;
}