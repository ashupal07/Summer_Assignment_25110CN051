//Write a program to Compress a string
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str,finalStr;
    cout<<"Enter string : ";
    getline(cin,str);
    int ch;
    for(int i=0;str[i]!='\0';i++){
        ch=1;
        finalStr+=str[i];
        for(int j=i+1;str[j]==str[i];j++){
            ch++;
            i++;
        }
        finalStr+=to_string(ch);       
    }
    cout<<finalStr;  
    return 0;
}