//Write a program to Remove duplicates from array
 
#include <iostream>
using namespace std;
int main(){
    int size;
    cout<< "Enter size of array: ";
    cin>> size;

    int arr[size],arr1[size],k=0;
    cout<<"Enter elements in array: ";
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    int found=0;
    
    for(int i=0;i<size;i++){
        found=0;
        for(int j=0;j<k;j++){
            if (arr[i] == arr1[j]){
                found++;
                break;
            }
        }
        if(found==0){
            arr1[k]=arr[i];
            k++;
        }
    }
    for (int i=0;i<k;i++){
        cout<<arr1[i]<<' ';
    }
    return 0; 
}