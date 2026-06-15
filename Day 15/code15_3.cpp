//Write a program to Rotate array right. 
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
    
    int temp=arr[size-1];
    for(int i=0;i<size;i++){
        arr[size-1-i]=arr[size-2-i];  
    }
    arr[0]=temp;

    //printing array
    for (int i=0;i<size;i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}
