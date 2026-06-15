//Write a program to Rotate array left. 
#include <iostream>
using namespace std;

int main(){
    int size;
    cout<< "Enter size of array: ";
    cin>> size;
    //input array
    int arr[size];
    cout<<"Enter elements in array: ";
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    //swapping values
    int temp=arr[0];
    for(int i=0;i<size;i++){
        arr[i]=arr[i+1];  
    }
    arr[size-1]=temp;

    //printing array
    for (int i=0;i<size;i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}
