//Write a program to Create contact management system.
#include <iostream>
#include <string>
using namespace std;

struct Contact {
    int no;
    string name;
    long mob;
};
int main(){
    int record=0,option;
    Contact b[100];
    while(true){
        cout<<"Select options-"<<endl;
        cout<<"1. Add contact "<<endl;
        cout<<"2. Delete contact "<<endl;
        cout<<"3. Display contacts "<<endl;
        cout<<"4. Exit"<<endl;
        cin>>option;
        
        switch(option){
            
            case 1 :{
                cout<<"Enter Contact record "<< record+1 <<" "<<endl;
                cout<<"Contact Serial number : ";
                b[record].no=record+1;
                cout<<b[record].no<<endl;
                cout<<"Contact Name : ";
                cin>>b[record].name;
                cout<<"Mobile No. : ";
                cin>>b[record].mob;
                record++;
            
                cout<<"Contact saved successfully..."<<endl;
                break;
            }
            case 2:{
                
                int found=0;
                string cname;
                cout<<"Enter Contact name : "<<endl;
                cin>>cname;
                for(int i=0;i<record;i++){
                    if(cname==b[i].name){
                        cout<<"Confirm Details- "<<b[i].name<<endl;
                        cout<<"Contact name : ";
                        cin>>b[i].name;
                        cout<<"Mobile No. : ";
                        cin>>b[i].mob;
                        found=1;
                        for(int j=i; j<record-1; j++){
                            b[j] = b[j+1];
                        }
                        record--;
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
                        cout<<"               CONTACT NO."<<i+1<<endl;
                        cout<<"---------------------------------------- "<<endl;
                        cout<<"Contact serial No. : "<<b[i].no<<endl;
                        cout<<"Contact Name : "<<b[i].name<<endl;
                        cout<<"Mobile No. : " << b[i].mob<<endl;
                        cout<<"****************************************** "<<endl;
                        count++;
                    }
                    cout<<"\nTotal no. of contacts in bank : "<<count<<endl;

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