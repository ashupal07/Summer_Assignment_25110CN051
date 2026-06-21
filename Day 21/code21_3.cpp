//Write a program to Count vowels and consonants
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    int n=str.length(),vowels=0,consonants=0;
    for(int i=0;str[i]!='\0';i++){
        if (string("aeiouAEIOU").find(str[i]) != string::npos) {
            vowels++;
        }
        else if(string("bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ").find(str[i]) != string::npos){
            consonants++;
        }
    }
    cout<<"no.of vowels are: "<<vowels<<endl;
    cout<<"no. of consonents are: "<<consonants;
    
    return 0;
}