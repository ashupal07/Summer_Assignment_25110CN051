//Write a program to Create ATM simulation. 
#include <iostream>
using namespace std;
int options(){
    int option;
    cout<<"\nSelect options-"<<endl;
    cout<<"1.Check Balance \n2.Deposite money \n3.Withdraw money \n4.Exit"<<endl;
    cin>>option;
    return option;
}
int main(){
    int balance=10000,option=options(),amount;
    while(option!=4){
        switch(option){
            case 1:
                cout<<"Balance : "<<balance;
                option=options();
                break;
                
            case 2:
                cout<<"Enter amount for deposit: ";
                cin>>amount;
                balance+=amount;
                cout<<"Deposited amount is "<<amount;
                option=options();
                break;
            case 3:
                cout<<"Enter amount for withdraw: ";
                cin>>amount;
                if(balance>=amount){
                    balance-=amount;
                cout<<"Withdrawn amount is "<<amount;
                }
                else{
                    cout<<"Insufficient Balance..."<<endl;
                    cout<<"Current balance is "<<balance<<endl;
                }
                option=options();
                break;
            default :{
                cout<<"Enter valid option"<<endl;
                option=options();
            }
        }
        
    }
    cout<<"Thank you for visiting...Visit again..."<<endl;
    return 0;

}