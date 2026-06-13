//Write a program to Find largest and smallest element
#include <iostream>
using namespace std;
int main(){
    int arr[100],size,max,min;
    cout<< "Enter size array: " << endl;
    cin>> size;
    cout<< "Enter elements in array: "<< endl;
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    min=max=arr[0];
    for (int i=1;i<size;i++){
        if (max<arr[i]){
            max=arr[i];
        }
        if (min>arr[i]){
            min=arr[i];
        }
    }
    cout<< "Largest element in array is " << max <<endl ;
    cout<< "Smallest element in array is " << min;
}