//Write a program to Linear search
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
            cout<<"Element "<<arr[i]<<" found at index " << i<< endl;
            found++;
        }
    }
    if (found==0){
        cout<< "Element not found ";
    }   
}
