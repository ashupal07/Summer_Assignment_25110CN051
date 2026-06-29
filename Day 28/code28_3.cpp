//Write a program to Create ticket booking system.
#include <iostream>
#include <string>
using namespace std;

struct Ticket {
    int no;
    string name;
    int seats;
};
int main(){
    int record=0,option;
    Ticket b[100];
    while(true){
        cout<<"Select options-"<<endl;
        cout<<"1. Book Ticket "<<endl;
        cout<<"2. Cancel Ticket "<<endl;
        cout<<"3. Display Tickets "<<endl;
        cout<<"4. Exit"<<endl;
        cin>>option;
        
        switch(option){
            
            case 1 :{
                cout<<"Enter Booking record "<< record+1 <<" "<<endl;
                cout<<"Ticket number : ";
                b[record].no=100+record;
                cout<<b[record].no<<endl;
                cout<<"Passenger Name : ";
                cin>>b[record].name;
                cout<<"No. of seats : ";
                cin>>b[record].seats;
                record++;
            
                cout<<"Ticket booked successfully..."<<endl;
                break;
            }
            case 2:{
                
                int found=0;
                int tno;
                cout<<"Enter Ticket number : "<<endl;
                cin>>tno;
                for(int i=0;i<record;i++){
                    if(tno==b[i].no){
                        cout<<"Confirm Details- "<<b[i].name<<endl;
                        cout<<"Passenger name : ";
                        cin>>b[i].name;
                        cout<<"seats : ";
                        cin>>b[i].seats;
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
                        cout<<"               TICKET "<<i+1<<endl;
                        cout<<"---------------------------------------- "<<endl;
                        cout<<"Ticket No. : "<<b[i].no<<endl;
                        cout<<"Passenger Name : "<<b[i].name<<endl;
                        cout<<"Seats : " << b[i].seats<<endl;
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