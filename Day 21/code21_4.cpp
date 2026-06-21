//Write a program to Convert lowercase to uppercase
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    
    for(int i=0;str[i]!='\0';i++){
        str[i]=str[i]-'a'+'A';
    }
    cout<<str;
    
    return 0;
}