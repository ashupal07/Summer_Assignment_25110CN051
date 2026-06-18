//Write a program to Selection sort
#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    //selection sort
    
    for(int i=0;i<size-1;i++){
        int min=arr[i];
        int index=i;
        for(int j=i+1;j<size;j++){
            if(min>arr[j]){
                min=arr[j];
                index=j;
            }
        }
        if(arr[index]<arr[i]){
            arr[index]=arr[i];
            arr[i]=min;
        }
    }
    //printing final array
    for(int i=0;i<size;i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}