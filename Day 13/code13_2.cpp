//Write a program to Find sum and average of array
#include <iostream>
using namespace std;
int main(){
    int arr[100],n,sum=0,avg=0;
    cout<< "Enter size of array: ";
    cin>>n;
    cout<< "Enter elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"sum of elements is : "<<sum<< endl;
    cout<<"Average of elements is: "<< sum/n;
    return 0;
}