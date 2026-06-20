//Write a program to Check symmetric matrix
#include <iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter size of (square)matrix : ";
    cin>>row>>column;

    int arr[row][column];
    cout<<"Enter elements of martrix : "<<endl;
    for(int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    int check=0;
    for(int i=1;i<row;i++){
        for (int j=0;j<i;j++){
            if (arr[j][i]!=arr[i][j]){
                cout<<"Matrix is not symmteric";
                check++;
                break;
            }
        }
    }
    if (check==0){
        cout<<"Matrix is symmetrix ";
    }

    return 0;
}