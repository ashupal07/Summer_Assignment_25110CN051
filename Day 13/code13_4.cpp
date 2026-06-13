//Write a program to Count even and odd elements
#include <iostream>
using namespace std;
int main(){
    int cEven=0, cOdd=0,size,arr[100];
    cout<<"Enter the size of array: "<< endl;
    cin>> size;
    cout<<"Enter elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
        if (arr[i]%2==0){
            cEven++;
        }
        else{
            cOdd++;
        }
    }
    cout<< "Number of odd elements are: "<< cOdd<< endl;
    cout<< "Number of even elements are: "<< cEven;
}