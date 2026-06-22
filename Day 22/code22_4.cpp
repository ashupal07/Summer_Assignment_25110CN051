//Write a program to Remove spaces from string
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str,cpystr;
    cout<<"Enter string : ";
    getline(cin,str);
    
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if (str[i]!=' ') {
            cpystr[j]=str[i];
            j++;
        }
    }
    for(int i=0;str[i]!='\0';i++){
        cout<<cpystr[i];    
    }
    return 0;
}