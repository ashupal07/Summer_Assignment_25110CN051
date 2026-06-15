//Write a program to Move zeroes to end.
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
    int temp=size;    
    //changing values
    
    for(int i=0;i<size;i++){
        if (arr[i]==0){
            
            for(int j=i;j<size-1;j++){
                arr[j]=arr[j+1];  
            }
            arr[size-1]=0;
            size--;
            i--;
        }
    }

    //printing array
    for (int i=0;i<temp;i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}