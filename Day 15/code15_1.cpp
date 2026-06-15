//Write a program to Reverse array. 
#include <iostream>
using namespace std;
int main(){
    int size;
    cout<< "Enter size of array: ";
    cin>> size;

    int arr[size];
    cout<<"Enter elements in array: ";
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    //swapping values
    int temp;
    for(int i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }

    //printing array
    for (int i=0;i<size;i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}