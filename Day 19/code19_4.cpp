//Write a program to Find diagonal sum
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
    
    int sum=0;
    for(int i=0;i<column;i++){
        for (int j=0;j<row;j++){
            if (i==j){
                sum+=arr[i][j];
            }
        }
    }
    
    cout<<"Sum of diagonals of matrix is:-"<<sum <<endl;

    return 0;
}