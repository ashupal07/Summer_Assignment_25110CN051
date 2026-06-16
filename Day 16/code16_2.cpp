//Write a program to Find maximum frequency element
#include <iostream>
using namespace std;
int main(){
    int size;
    cout<< "Enter size of array: ";
    cin>> size;
    int arr[size];
    cout<< "Enter elements in array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    int maxf=0,found=0,max=0;
    
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if (arr[i]==arr[j]){
                found++;
            }
        }
        if (found>1){
            if (max<found){
                maxf=arr[i];
                max=found;
                
            }
        }
        found=0;
    }
    cout<<"max frequency is: "<<maxf;
    return 0;
}
