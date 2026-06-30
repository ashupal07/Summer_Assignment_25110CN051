//Write a program to Create menu-driven array operations system.
#include <iostream>
using namespace std;
int main() {
    int arr[100], n;
    cout<< "Enter the size of array: ";
    cin>> n;
    cout<<"Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin>> arr[i];
    }

    while (true) {
        int option;

        cout<< "\n===== Array Operations Menu ====="<<endl;
        cout<< "1. Display Array"<<endl;
        cout<< "2. Find Sum of Elements"<<endl;
        cout<< "3. Find Maximum Element"<<endl;
        cout<< "4. Find Minimum Element"<<endl;
        cout<< "5. Search an Element"<<endl;
        cout<< "6. Exit"<<endl;
        cout<< "Enter your choice: ";
        cin>>option;

        switch(option) {

        case 1:{
            cout<< "Array Elements: ";
            for(int i = 0; i < n; i++) {
                cout<< arr[i] << " ";
            }
            cout<< endl;
            break;
        }

        case 2:{
            int sum = 0;
            for(int i = 0; i < n; i++) {
                sum += arr[i];
            }
            cout<< "Sum = " << sum << endl;
            break;
        }

        case 3:{
            int max = arr[0];
            for(int i=1;i< n;i++) {
                if (arr[i]> max) {
                    max = arr[i];
                }
            }
            cout<<"Maximum Element = "<<max<<endl;
            break;
        }

        case 4:{
            int min=arr[0];
            for (int i=1;i<n;i++) {
                if (arr[i]<min) {
                    min=arr[i];
                }
            }
            cout<<"Minimum Element = "<<min<< endl;
            break;
        }

        case 5:{
            int key,found = 0;
            cout<<"Enter element to search: ";
            cin>>key;

            for(int i=0;i <n;i++) {
                if (arr[i] ==key) {
                    cout<<"Element found at index " << i << endl;
                    found=1;
                    break;
                }
            }

            if(found==0){
                cout<<"Element not found." << endl;
            }
            break;
        }

        case 6:{
            cout<<"Exiting Program..." << endl;
            return 0;
        }

        default:
            cout<<"Invalid Choice! Please try again." << endl;
        }
    }

    return 0;
}