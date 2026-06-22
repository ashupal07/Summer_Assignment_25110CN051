//Write a program to Character frequency
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    char ch;
    cout<<"enter character ";
    cin>>ch;
    int freq=0;
    for(int i=0;str[i]!='\0';i++){
        if (str[i]==ch) {
            freq++;
        }
    }
    cout<<"Frequency of character is : "<<freq<<endl;    
    return 0;
}