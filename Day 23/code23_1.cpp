//Write a program to Find first non-repeating character
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    int ch;
    for(int i=0;str[i]!='\0';i++){
        ch=0;
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                ch++;
            }
        }
        if(ch==0){
            cout<<"First non repeating character is : "<<str[i]<<endl;
            break;
        }
    }
        
    return 0;
}