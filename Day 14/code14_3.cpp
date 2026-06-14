//Write a program to Second largest element. 
#include <iostream>
using namespace std;
int main(){
    int size;
    cout<< "Enter size of array: ";
    cin>> size;

    int arr[size];
    cout<<"Enter elements in array: ";
    for(int i=0;i<size;i++){
        cin>> arr[i];
    }
    int temp;
    
    for(int i=0;i<size;i++){
        for (int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"The second largest element of array is "<< arr[size-2];

    return 0;
}