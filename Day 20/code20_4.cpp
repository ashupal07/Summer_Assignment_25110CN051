//Write a program to Find column-wise sum.
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
    int sum;
    for(int i=0;i<row;i++){
        sum=0;
        for (int j=0;j<column;j++){
            sum+=arr[j][i];
        }
        cout<<"sum of column "<<i+1<<" is "<<sum<< endl;
    }
    return 0;
}