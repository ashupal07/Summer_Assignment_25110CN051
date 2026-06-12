//Write a program to Write function for palindrome.
#include <iostream>
using namespace std;

void palindrome(string s){
    int n = s.size();
    
    int check=0;
    for(int i=0;i<n/2;i++){
        if (s[i]!=s[n-i-1]){
            check++;
        }
    }
    if (check==0){
        cout<< "palindrome";
        }
    else{
        cout<< "NOT palindrome";
    }
}
int main(){
    string data;
    cout<< "Enter input: ";
    cin>> data;
    
    palindrome(data);
    return 0;
}