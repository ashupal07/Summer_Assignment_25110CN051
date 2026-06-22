//Write a program to Count words in a sentence
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    int words=0;
    for(int i=0;str[i]!='\0';i++){
        if (str[i]==' ') {
            words++;
        }
    }
    cout<<"no.of words are: "<<words+1<<endl;    
    return 0;
}