//Write a program to Create menu-driven calculator
#include <iostream>
#include <string>
using namespace std;

int main(){
    while(true){
        int option;
        cout<<"Select options-"<<endl;
        cout<<"1. Addition "<<endl;
        cout<<"2. Substraction "<<endl;
        cout<<"3. Multiplication "<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Exit"<<endl;
        cin>>option;
        
        switch(option){
            
            case 1 :{
                float num1,num2,result;
                cout<<"Addition of two numbers : "<<endl;
                cout<<"Enter number 1: ";
                cin>>num1;
                cout<<"Enter number 2: ";
                cin>>num2;
                result=num1+num2;
                cout<<"Result is : "<<result<<endl;
                cout<<"Calculated successfully..."<<endl;
                break;
            }
            case 2:{
                float num1,num2,result;
                cout<<"Subtraction of two numbers : "<<endl ;
                cout<<"Enter number 1: ";
                cin>>num1;
                cout<<"Enter number 2: ";
                cin>>num2;
                result=num1-num2;
                cout<<"Result is : "<<result<<endl;
                cout<<"Calculated successfully..."<<endl;
                break;
            }
            case 3:{
                float num1,num2,result;
                cout<<"multiplication of two numbers : "<<endl ;
                cout<<"Enter number 1: ";
                cin>>num1;
                cout<<"Enter number 2: ";
                cin>>num2;
                result=num1*num2;
                cout<<"Result is : "<<result<<endl;
                cout<<"Calculated successfully..."<<endl;
                break;
                
            }
            case 4:{
                float num1,num2,result;
                cout<<"Division of two numbers : "<<endl ;
                cout<<"Enter number 1: ";
                cin>>num1;
                cout<<"Enter number 2: ";
                cin>>num2;
                result=num1/num2;
                cout<<"Result is : "<<result<<endl;
                cout<<"Calculated successfully..."<<endl;
                break;
            }
            case 5:{
                return 0;
            }
            default :
                cout<<"Enter valid option"<<endl;
    
        }
    }

    return 0;
}