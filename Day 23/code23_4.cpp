//Write a program to Find maximum occurring character
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    int ch,max=0,maxIndex=0;
    for(int i=0;str[i]!='\0';i++){
        ch=0;
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                ch++;
            }
        }
        if(max<ch){
            max=ch;
            maxIndex=i;
        }
            
    }
    cout<<"Maximum occurring character is : "<<str[maxIndex]<<endl;  
    return 0;
}