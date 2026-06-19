//Write a program to Transpose matrix
#include <iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter size of matrix : ";
    cin>>row>>column;

    int arr[row][column];
    cout<<"Enter elements of martrix : "<<endl;
    for(int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"Transpose of matrix is:-"<<endl;
    for(int i=0;i<column;i++){
        for (int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}