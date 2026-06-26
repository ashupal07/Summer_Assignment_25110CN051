//write a program to Merge two sorted arrays
#include <iostream>
using namespace std;
int main() {
    int size1;
    cout <<"Enter size of array 1: ";
    cin >>size1;
    int arr1[size1];
    cout << "Enter elements of array 1: ";
    for (int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    int size2;
    cout <<"Enter size of array 2:";
    cin>>size2;

    int arr2[size2];
    cout<<"Enter elements of array 2: ";
    for(int i = 0; i < size2; i++) {
        cin>>arr2[i];
    }

    int size3=size1+size2;
    int arr3[size3];

    //merge while both arrays have elements
    int i=0,j=0,k=0;
    while (j<size1&& k<size2) {
        if (arr1[j]<=arr2[k]){
            arr3[i]=arr1[j];
            j++;
        } 
        else{
            arr3[i]=arr2[k];
            k++;
        }
        i++;
    }
    //copy remaining elements of arr1
    while (j < size1) {
        arr3[i] = arr1[j];
        i++;
        j++;
    }
    //copy remaining elements of arr2
    while (k<size2) {
        arr3[i]=arr2[k];
        i++;
        k++;
    }
    //output array
    cout <<"Merged array is: ";
    for (int i = 0; i < size3; i++) {
        cout << arr3[i] << " ";
    }
    return 0;
}