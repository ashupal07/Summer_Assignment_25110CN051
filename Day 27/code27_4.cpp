//Write a program to Create marksheet generation system.
#include <iostream>
#include <string>
using namespace std;

struct Marksheet {
    int roll;
    string name;
    float eMarks;
    float mMarks;
    float sMarks;
};
int main(){
    int record=0,option;
    Marksheet ms[100];
    while(true){
        cout<<"Select options-"<<endl;
        cout<<"1. Enter record "<<endl;
        cout<<"2. Edit record "<<endl;
        cout<<"3. Display Marksheet "<<endl;
        cout<<"4. Exit"<<endl;
        cin>>option;
        
        switch(option){
            
            case 1 :{
                cout<<"Number of Student data u want to input: ";
                cin>>record;
        
                    for(int i=0;i<record;i++){
                        cout<<"Enter record "<< i+1 <<" "<<endl;
                        cout<<"Roll No. : ";
                        cin>>ms[i].roll;
                        cout<<"Name : ";
                        cin>>ms[i].name;
                        cout<<"Marks-"<<endl;
                        cout<<"English : ";
                        cin>>ms[i].eMarks;
                        cout<<"Maths : ";
                        cin>>ms[i].mMarks;
                        cout<<"Science : ";
                        cin>>ms[i].sMarks;
                    }
                    cout<<"Records added succefully..."<<endl;
                    break;
            }
            case 2:{
                
                int found=0;
                int sid;
                cout<<"Enter Student roll no. : "<<endl;
                cin>>sid;
                for(int i=0;i<record;i++){
                    if(sid==ms[i].roll){
                        cout<<"Enter new data of "<<ms[i].name<<endl;
                        cout<<"Name : ";
                        cin>>ms[i].name;
                        cout<<"English : ";
                        cin>>ms[i].eMarks;
                        cout<<"Maths : ";
                        cin>>ms[i].mMarks;
                        cout<<"Science : ";
                        cin>>ms[i].sMarks;
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
                for(int i=0;i<record;i++){
                        cout<<"---------------------------------------- "<<endl;
                        cout<<"               MARKSHEET                 "<<endl;
                        cout<<"---------------------------------------- "<<endl;
                        cout<<"Roll No. : "<<ms[i].roll<<endl;
                        cout<<"Name : "<<ms[i].name<<endl<<endl;
                        cout<<"English : " << ms[i].eMarks<<endl;
                        cout<<"Mathematics : "<<ms[i].mMarks<<endl;
                        cout<<"Science : "<<ms[i].sMarks<<endl;
                        cout<<"\nTotal : "<<ms[i].eMarks+ms[i].mMarks+ms[i].sMarks<<endl;
                        cout<<"Percentage : "<<(ms[i].eMarks+ms[i].mMarks+ms[i].sMarks)/3<<"%"<<endl;
                        cout<<"---------------------------------------- "<<endl;
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