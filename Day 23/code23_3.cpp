//Write a program to Check anagram strings
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1,str2;
    cout<<"Enter string 1 : ";
    getline(cin,str1);
    cout<<"Enter string 2 : ";
    getline(cin,str2);
    int ch1,ch2;
    for(int i=0;str1[i]!='\0';i++){
        ch1=ch2=0;
        for(int j=0;str1[j]!='\0';j++){
            if(str1[i]==str1[j]){
                ch1++;
            }
            if(str1[i]==str2[j]){
                ch2++;
            }
        }
        if(ch1!=ch2){
            cout<<"String is not anagram"<<endl;
            break;
        }
    }
    if(ch1==ch2){
        cout<<"String is anagram ";
    }       
    return 0;
}