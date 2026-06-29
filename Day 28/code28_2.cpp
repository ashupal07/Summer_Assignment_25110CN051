//Write a program to Create bank account system
#include <iostream>
#include <string>
using namespace std;

struct Bank {
    long no;
    string name;
    float balance;
};
int main(){
    int record=0,option;
    Bank b[100];
    while(true){
        cout<<"Select options-"<<endl;
        cout<<"1. Enter record "<<endl;
        cout<<"2. Edit record "<<endl;
        cout<<"3. Display Records "<<endl;
        cout<<"4. Exit"<<endl;
        cin>>option;
        
        switch(option){
            
            case 1 :{
                cout<<"Number of accounts data u want to input: ";
                cin>>record;
        
                    for(int i=0;i<record;i++){
                        cout<<"Enter Account record "<< i+1 <<" "<<endl;
                        cout<<"Account number : ";
                        cin>>b[i].no;
                        cout<<"Account Holder Name : ";
                        cin>>b[i].name;
                        cout<<"Balance : ";
                        cin>>b[i].balance;
                    }
                    cout<<"Records added successfully..."<<endl;
                    break;
            }
            case 2:{
                
                int found=0;
                int bno;
                cout<<"Enter account number : "<<endl;
                cin>>bno;
                for(int i=0;i<record;i++){
                    if(bno==b[i].no){
                        cout<<"Enter new data- "<<b[i].name<<endl;
                        cout<<"Account Holder name : ";
                        cin>>b[i].name;
                        cout<<"Balance : ";
                        cin>>b[i].balance;
                        found=1;
                        break;
                    }
                }
                if(found==0){
                    cout<<"No record found..."<<endl;
                }
                break;
                
            }
            case 3:{
                int count=0;
                for(int i=0;i<record;i++){
                        cout<<"---------------------------------------- "<<endl;
                        cout<<"               ACCOUNT "<<i+1<<endl;
                        cout<<"---------------------------------------- "<<endl;
                        cout<<"Account No. : "<<b[i].no<<endl;
                        cout<<"Name : "<<b[i].name<<endl;
                        cout<<"Balance : " << b[i].balance<<endl;
                        cout<<"****************************************** "<<endl;
                        count++;
                    }
                    cout<<"\nTotal no. of accounts in bank : "<<count<<endl;

                    break;
            }
            case 4:{
                cout<<"Thank you...";
                return 0;
            }
            default :
                cout<<"Enter valid option";
    
        }
    }

    return 0;
}