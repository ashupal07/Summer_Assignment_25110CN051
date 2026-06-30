//Write a program to Develop complete mini project using arrays, strings and functions.
//Student management system
#include<iostream>
#include<string>
using namespace std;

string name[100];
int roll[100];
float marks[100];
int n=0;

void addStudent(){
    cout<<"Enter Student Name: ";
    cin.ignore();
    getline(cin,name[n]);

    cout<<"Enter Roll Number: ";
    cin>>roll[n];

    cout<<"Enter Marks: ";
    cin>>marks[n];

    n++;

    cout<<"Student Added Successfully!"<<endl;
}

void displayStudents(){
    if(n==0){
        cout<<"No Student Records Found!"<<endl;
        return;
    }

    cout<<"\nName\tRoll\tMarks"<<endl;

    for(int i=0;i<n;i++){
        cout<<name[i]<<"\t"
            <<roll[i]<<"\t"
            <<marks[i]<<endl;
    }
}

void searchStudent(){
    int searchRoll;
    bool found=false;

    cout<<"Enter Roll Number to Search: ";
    cin>>searchRoll;

    for(int i=0;i<n;i++){
        if(roll[i]==searchRoll){
            cout<<"\nStudent Found!"<<endl;
            cout<<"Name: "<<name[i]<<endl;
            cout<<"Roll Number: "<<roll[i]<<endl;
            cout<<"Marks: "<<marks[i]<<endl;
            found=true;
            break;
        }
    }

    if(!found){
        cout<<"Student Not Found!"<<endl;
    }
}

int main(){

    while(true){
        int option;

        cout<<"\n===== Student Management System ====="<<endl;
        cout<<"1. Add Student"<<endl;
        cout<<"2. Display Students"<<endl;
        cout<<"3. Search Student"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>option;

        switch(option){

            case 1:{
                addStudent();
                break;
            }

            case 2:{
                displayStudents();
                break;
            }

            case 3:{
                searchStudent();
                break;
            }

            case 4:{
                cout<<"Exiting Program..."<<endl;
                return 0;
            }

            default:{
                cout<<"Invalid Choice!"<<endl;
            }
        }
    }

    return 0;
}