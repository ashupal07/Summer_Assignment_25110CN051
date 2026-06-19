//Write a program to Add matrices
#include <iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter size of matrix : ";
    cin>>row>>column;

    int arr1[row][column],arr2[row][column];
    cout<<"Enter elements of martrix 1"<<endl;
    for(int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            cin>>arr1[i][j];
        }
    }
    
    cout<<"Enter elements of martrix 2"<<endl;
    for(int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"Sum of matrix is:-"<<endl;
    for(int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}