//Write a program to Check palindrome string. 
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"Enter string : ";
    cin>>str;
    int n=str.length(),palin=0;
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-1-i]){
            palin++;
        }       
    }
    //checking resultant string
    if(palin==0){
        cout<<"string is palindrome "<<endl;
    }
    else{
        cout<<"String is not palindrome";
    }
        
    return 0;
}