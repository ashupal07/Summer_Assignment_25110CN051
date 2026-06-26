//Write a program to Sort words by length.
#include <iostream>
#include <string>
using namespace std;

int main(){
    int num;
    cout<<"Enter number of names you want to enter: ";
    cin>>num;
    string name[num];
    for(int i=0;i<num;i++){
        cin>>name[i];
    }
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-1-i;j++){
            if (name[j].length()>name[j+1].length()){
                swap(name[j],name[j+1]);
            }
        }
    }
    cout<<"Sort word by names order "<<endl;
    for(int i=0;i<num;i++){
        cout<<name[i]<<endl;
    }

    return 0;
}