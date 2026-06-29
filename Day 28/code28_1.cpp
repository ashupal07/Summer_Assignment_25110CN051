//Write a program to Create library management system

#include <iostream>
#include <string>
using namespace std;

struct Library {
    int id;
    string name;
    string author;
    float price;
    int copies;
};
int main(){
    int record=0,option;
    Library lb[100];
    while(true){
        cout<<"Select options-"<<endl;
        cout<<"1. Enter record "<<endl;
        cout<<"2. Edit record "<<endl;
        cout<<"3. Display Books "<<endl;
        cout<<"4. Exit"<<endl;
        cin>>option;
        
        switch(option){
            
            case 1 :{
                cout<<"Number of Books data u want to input: ";
                cin>>record;
        
                    for(int i=0;i<record;i++){
                        cout<<"Enter Book record "<< i+1 <<" "<<endl;
                        cout<<"Book id : ";
                        cin>>lb[i].id;
                        cout<<"Name : ";
                        cin>>lb[i].name;
                        cout<<"Author : ";
                        cin>>lb[i].author;
                        cout<<"Price : ";
                        cin>>lb[i].price;
                        cout<<"Copies : ";
                        cin>>lb[i].copies;
                    }
                    cout<<"Records added succefully..."<<endl;
                    break;
            }
            case 2:{
                
                int found=0;
                int bid;
                cout<<"Enter Book id : "<<endl;
                cin>>bid;
                for(int i=0;i<record;i++){
                    if(bid==lb[i].id){
                        cout<<"Enter new data of "<<lb[i].name<<endl;
                        cout<<"Book id : ";
                        cin>>lb[i].id;
                        cout<<"Name : ";
                        cin>>lb[i].name;
                        cout<<"Author : ";
                        cin>>lb[i].author;
                        cout<<"Price : ";
                        cin>>lb[i].price;
                        cout<<"Copies : ";
                        cin>>lb[i].copies;
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
                        cout<<"               BOOK NO."<<i+1<<endl;
                        cout<<"---------------------------------------- "<<endl;
                        cout<<"Book id. : "<<lb[i].id<<endl;
                        cout<<"Name : "<<lb[i].name<<endl;
                        cout<<"Author : " << lb[i].author<<endl;
                        cout<<"Price : "<<lb[i].price<<endl;
                        cout<<"Copies : "<<lb[i].copies<<endl;
                        count+=lb[i].copies;
                        cout<<"****************************************** "<<endl;
                    }
                    cout<<"\nTotal no. of books in library : "<<count<<endl;

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