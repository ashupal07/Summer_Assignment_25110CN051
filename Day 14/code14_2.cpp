//Write a program to Frequency of an element
#include <iostream>
using namespace std;
int main(){
    int num,size;
    cout<< "Enter size of array: ";
    cin>> size;
    int arr[size];
    cout<< "Enter elements in array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    //for linear search 
    cout<< "Enter the elements for linear search: ";
    cin>>num;
    
    int found=0;
    
    for(int i=0;i<size;i++){
        if (arr[i]==num){
            found++;
        }
    }
    if (found==0){
        cout<< "Element not found ";
    }   
    else{
        cout<< "Frequency of "<<num <<" is "<<found;
    }
}
