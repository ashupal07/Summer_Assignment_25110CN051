//Write a program to Sort array in descending order
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

    //bubble sorting technique
   int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j+1]>array[j]){
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
    //printing array output
    for(int i=0;i<size;i++){
        cout<<array[i] <<" ";
    }

    return 0;
}