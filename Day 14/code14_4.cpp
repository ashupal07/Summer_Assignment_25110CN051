//Write a program to Find duplicates in array

#include <iostream>
using namespace std;
int main(){

    int num,size;
    cout<< "Enter size of array: ";
    cin>> size;

    int arr[size];
    cout<< "Enter elements in array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    int found=0;
    cout<<"Duplicate elements are: "<<endl;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if (arr[i]==arr[j]){
                cout<<arr[i]<< " ";
                found++;
                break;
            }
        }
    }
    if (found==0){
        cout<< "No duplicate elements";
    }   
    
}
