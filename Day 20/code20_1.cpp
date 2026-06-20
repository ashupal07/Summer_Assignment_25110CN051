//Write a program to Multiply matrices. 
#include <iostream>
using namespace std;

int main(){
    int row1,column1,row2,column2;
    cout<<"Enter size of matrix 1: ";
    cin>>row1>>column1;
    cout<<"Enter size of matrix 2: ";
    cin>>row2>>column2;

    int arr1[row1][column1],arr2[row2][column2];
    cout<<"Enter elements of martrix 1"<<endl;
    for(int i=0;i<row1;i++){
        for (int j=0;j<column1;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter elements of martrix 2"<<endl;
    for(int i=0;i<row2;i++){
        for (int j=0;j<column2;j++){
            cin>>arr2[i][j];
        }
    }
    if(column1==row2){
        int value;
        for(int i=0;i<row1;i++){
            for (int j=0;j<column2;j++){
                value=0;
                for(int k=0;k<column1;k++){
                    value+=arr1[i][k]*arr2[k][j];
                }
                cout<<value<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}