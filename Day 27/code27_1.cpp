//Write a program to Create student record management system.
#include <iostream>
#include <string>
using namespace std;

struct student {
    string name;
    int age;
    float marks;
};
int main(){
    int record=0,option;
    student srec[100];
    while(true){
        cout<<"Select options-"<<endl;
        cout<<"1. Enter record "<<endl;
        cout<<"2. Edit data "<<endl;
        cout<<"3. Exit"<<endl;
        cin>>option;
        
        switch(option){
            
            case 1 :{
                cout<<"Number of students data u want to input: ";
                cin>>record;
        
                    for(int i=0;i<record;i++){
                        cout<<"Enter record "<< i+1 <<" "<<endl;
                        cin>>srec[i].name;
                        cin>>srec[i].age;
                        cin>>srec[i].marks;
                    }
                    cout<<"Records added succefully..."<<endl;
                    cout<<"Recorded data - "<<endl;
                    for(int i=0;i<record;i++){
                        cout<<"Record of student "<< i+1 <<" "<<endl;
                        cout<<srec[i].name<<endl;
                        cout<<srec[i].age<<endl;
                        cout<<srec[i].marks<<endl;
                    }
                    break;
            }
            case 2:{

                int found=0;
                string sname;
                cout<<"Enter name of student: "<<endl;
                cin>>sname;
                for(int i=0;i<record;i++){
                    if(sname==srec[i].name){
                        cout<<"Enter new data of "<<sname<<endl;
                        cin>>srec[i].name;
                        cin>>srec[i].age;
                        cin>>srec[i].marks;
                        found=1;
                        break;
                    }
                }
                if(found==0){
                    cout<<"No record found...";
                }
                break;
            
            }
            case 3:{
                cout<<"Thank you...";
                return 0;
            }
            default :
                cout<<"Enter valid option";
    
        }
    }

    return 0;
}