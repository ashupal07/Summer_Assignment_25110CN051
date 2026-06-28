//Write a program to Create salary management system.
#include <iostream>
#include <string>
using namespace std;

struct salarymgt {
    int id;
    string name;
    float bsalary;
    float bonus;
    float deduction;
};
int main(){
    int record=0,option;
    salarymgt erec[100];
    while(true){
        cout<<"Select options-"<<endl;
        cout<<"1. Enter record "<<endl;
        cout<<"2. Edit data "<<endl;
        cout<<"3. Display records "<<endl;
        cout<<"4. Exit"<<endl;
        cin>>option;
        
        switch(option){
            
            case 1 :{
                cout<<"Number of employee data u want to input: ";
                cin>>record;
        
                    for(int i=0;i<record;i++){
                        cout<<"Enter record "<< i+1 <<" "<<endl;
                        cout<<"Id : ";
                        cin>>erec[i].id;
                        cout<<"Name : ";
                        cin>>erec[i].name;
                        cout<<"Basic salary : ";
                        cin>>erec[i].bsalary;
                        cout<<"Bonus : ";
                        cin>>erec[i].bonus;
                        cout<<"Deduction : ";
                        cin>>erec[i].deduction;
                    }
                    cout<<"Records added succefully..."<<endl;
                    break;
            }
            case 2:{
                
                int found=0;
                int eid;
                cout<<"Enter employee id : "<<endl;
                cin>>eid;
                for(int i=0;i<record;i++){
                    if(eid==erec[i].id){
                        cout<<"Enter new data of "<<erec[i].name<<endl;
                        cout<<"Name : ";
                        cin>>erec[i].name;
                        cout<<"Basic salary : ";
                        cin>>erec[i].bsalary;
                        cout<<"Bonus : ";
                        cin>>erec[i].bonus;
                        cout<<"Deduction : ";
                        cin>>erec[i].deduction;
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
                    cout<<"Recorded data - "<<endl;
                    for(int i=0;i<record;i++){
                        cout<<"Id : "<<erec[i].id<<endl;
                        cout<<"Record of employee "<< i+1 <<" "<<endl;
                        cout<<"Name : "<<erec[i].name<<endl;
                        cout<<"Basic salary : "<<erec[i].bsalary<<endl;
                        cout<<"Bonus : " << erec[i].bonus<<endl;
                        cout<<"Deduction : "<<erec[i].deduction<<endl;
                        cout<<"Net Salary : "<<erec[i].bsalary+erec[i].bonus-erec[i].deduction<<endl;
                    }
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