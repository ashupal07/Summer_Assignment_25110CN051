//Write a program to Remove duplicate characters.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str,finalStr;
    cout<<"Enter string : ";
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++){
        if(finalStr.find(str[i])==string::npos){
            finalStr+=str[i];
        }       
    }
    cout<<finalStr;  
    return 0;
}