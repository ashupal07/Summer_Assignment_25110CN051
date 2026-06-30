//Write a program to Create mini employee management system
#include<iostream>
#include<string>
using namespace std;

int main(){
    string name[100];
    string department[100];
    int empID[100];
    float salary[100];

    int n=0;

    while(true){
        int option;

        cout<<"\n===== Employee Management System ====="<<endl;
        cout<<"1. Add Employee"<<endl;
        cout<<"2. Display Employees"<<endl;
        cout<<"3. Search Employee"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>option;
        cin.ignore();

        switch(option){

            case 1:{
                cout<<"Enter Employee ID: ";
                cin>>empID[n];
                cin.ignore();

                cout<<"Enter Employee Name: ";
                getline(cin,name[n]);

                cout<<"Enter Department: ";
                getline(cin,department[n]);

                cout<<"Enter Salary: ";
                cin>>salary[n];
                cin.ignore();

                n++;

                cout<<"Employee Added Successfully!"<<endl;
                break;
            }

            case 2:{
                if(n==0){
                    cout<<"No Employee Records Found!"<<endl;
                }
                else{
                    cout<<"\nID\tName\tDepartment\tSalary"<<endl;

                    for(int i=0;i<n;i++){
                        cout<<empID[i]<<"\t"
                            <<name[i]<<"\t"
                            <<department[i]<<"\t"
                            <<salary[i]<<endl;
                    }
                }
                break;
            }

            case 3:{
                int searchID;
                bool found=false;

                cout<<"Enter Employee ID to Search: ";
                cin>>searchID;

                for(int i=0;i<n;i++){
                    if(empID[i]==searchID){
                        cout<<"\nEmployee Found!"<<endl;
                        cout<<"Employee ID: "<<empID[i]<<endl;
                        cout<<"Name: "<<name[i]<<endl;
                        cout<<"Department: "<<department[i]<<endl;
                        cout<<"Salary: "<<salary[i]<<endl;
                        found=true;
                        break;
                    }
                }

                if(!found){
                    cout<<"Employee Not Found!"<<endl;
                }

                cin.ignore();
                break;
            }

            case 4:{
                cout<<"Exiting Program..."<<endl;
                return 0;
            }

            default:
                cout<<"Invalid Choice!"<<endl;
        }
    }

    return 0;
}