//Write a program to Create employee management system.
#include <iostream>
#include <string>
using namespace std;

struct employee {
    string name;
    int age;
    float salary;
};
int main(){
    int record=0,option;
    employee erec[100];
    while(true){
        cout<<"Select options-"<<endl;
        cout<<"1. Enter record "<<endl;
        cout<<"2. Edit data "<<endl;
        cout<<"3. Display records "<<endl;
        cout<<"4. Exit"<<endl;
        cin>>option;
        
        switch(option){
            
            case 1 :{
                cout<<"Number of students data u want to input: ";
                cin>>record;
        
                    for(int i=0;i<record;i++){
                        cout<<"Enter record "<< i+1 <<" "<<endl;
                        cin>>erec[i].name;
                        cin>>erec[i].age;
                        cin>>erec[i].salary;
                    }
                    cout<<"Records added succefully..."<<endl;
                    break;
            }
            case 2:{
                
                int found=0;
                string ename;
                cout<<"Enter name of student: "<<endl;
                cin>>ename;
                for(int i=0;i<record;i++){
                    if(ename==erec[i].name){
                        cout<<"Enter new data of "<<ename<<endl;
                        cin>>erec[i].name;
                        cin>>erec[i].age;
                        cin>>erec[i].salary;
                        found=1;
                        break;
                    }
                }
                if(found==0){
                    cout<<"No record found...<<endl";
                }
                break;
                
            }
            case 3:{
                    cout<<"Recorded data - "<<endl;
                    for(int i=0;i<record;i++){
                        cout<<"Record of student "<< i+1 <<" "<<endl;
                        cout<<erec[i].name<<endl;
                        cout<<erec[i].age<<endl;
                        cout<<erec[i].salary<<endl;
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