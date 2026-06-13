//Write a program to Input and display array
#include <iostream>
using namespace std;

void inputArr(int arr[],int n){
    cout<< "Enter elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void displayArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    
    cout<<"Enter size of array: ";
    cin>>size;

    int array[size];
    
    inputArr(array,size);
    displayArr(array,size);
    
    return 0;
}