//Write a program to Binary search
#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int array[size];
    cout<<"Enter elements of array: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j+1]<array[j]){
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
    cout<<"Enter number: ";
    int num;
    cin>>num;
    
    int left=0,right=size-1,mid,found=0;
    while(left<=right){
        mid=(left+right)/2;
        if(array[mid]==num){
            cout<<"Element found at "<< mid+1 << "position ";
            found++;
            break;
        }
        else if(num>array[mid]){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    if(found==0){
        cout<<"Element not found ";
    }

    return 0;
}