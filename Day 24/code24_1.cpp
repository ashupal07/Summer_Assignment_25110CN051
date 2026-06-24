//Write a program to Check string rotation
#include <iostream>
#include <string>
using namespace std;

int main(){
    string orgStr,checkStr;
    cout<<"Enter original string: ";
    cin>> orgStr;

    cout<<"Enter String for checking: ";
    cin>> checkStr;

    if(orgStr.length()==checkStr.length()){
        orgStr+=orgStr;
        if (orgStr.find(checkStr)!=string::npos){
            cout<<"String have rotations ";
        }
        else{
            cout<<"String doesn't have rotation ";
        }
    }
    else{
        cout<<"String doen't have rotation ";
    }


    return 0;
}
