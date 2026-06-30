//Write a program to Create mini library system.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string bookName[100];
    string author[100];
    int bookID[100];

    int n=0;

    while(true){
        int option;

        cout<<"\n===== Mini Library System ====="<<endl;
        cout<<"1. Add Book"<<endl;
        cout<<"2. Display Books"<<endl;
        cout<<"3. Search Book"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>option;
        cin.ignore();

        switch(option){

            case 1:{
                cout<<"Enter Book ID: ";
                cin>>bookID[n];
                cin.ignore();

                cout<<"Enter Book Name: ";
                getline(cin,bookName[n]);

                cout<<"Enter Author Name: ";
                getline(cin,author[n]);

                n++;
                cout<<"Book Added Successfully!"<<endl;
                break;
            }

            case 2:{
                if(n==0){
                    cout<<"No Books Available!"<<endl;
                }
                else{
                    cout<<"\nBook ID\tBook Name\tAuthor"<<endl;

                    for(int i=0;i<n;i++){
                        cout<<bookID[i]<<"\t"
                            <<bookName[i]<<"\t"
                            <<author[i]<<endl;
                    }
                }
                break;
            }

            case 3:{
                int searchID;
                bool found=false;

                cout<<"Enter Book ID to Search: ";
                cin>>searchID;

                for(int i=0;i<n;i++){
                    if(bookID[i]==searchID){
                        cout<<"\nBook Found!"<<endl;
                        cout<<"Book ID: "<<bookID[i]<<endl;
                        cout<<"Book Name: "<<bookName[i]<<endl;
                        cout<<"Author: "<<author[i]<<endl;
                        found=true;
                        break;
                    }
                }

                if(!found){
                    cout<<"Book Not Found!"<<endl;
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