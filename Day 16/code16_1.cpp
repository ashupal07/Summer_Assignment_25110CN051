//Write a program to Find missing number in array
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
    cout<<"Missing elements are ";
    for(int i=0;i<size-1;i++){
        
        if(arr[i+1]!=arr[i]+1){
            cout<<arr[i]+1<< " ";
        }
    }
    return 0;
}