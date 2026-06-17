//Write a program to Merge arrays
#include <iostream>
using namespace std;
int main(){
    
    int size1;
    cout<< "Enter size of array 1 : ";
    cin>> size1;

    int arr1[size1];
    cout<<"Enter elements in array 1: ";
    for (int i=0;i<size1;i++){
        cin>>arr1[i];
    }

    int size2;
    cout<< "Enter size of array 2 : ";
    cin>> size2;
    
    int arr2[size2];
    cout<<"Enter elements in array 2: ";
    for (int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    int arr3[size1+size2];
    for(int i=0;i<size1+size2;i++){
        if(i<size1){
            arr3[i]=arr1[i];
        }
        else{
            arr3[i]=arr2[i-size1];
        }
        cout<<arr3[i]<<" ";
    }
    return 0;
}