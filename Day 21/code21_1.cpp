//Write a program to Find string length without strlen()
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"Enter string : ";
    cin>>str;
    int length=0;
    while(str[length]!= '\0'){
        length++;
    }
    cout<<"Length of the string is "<<length;
    return 0;
}