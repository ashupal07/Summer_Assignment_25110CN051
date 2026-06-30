//Write a program to Create student record system using arrays and strings.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[100];
    int roll[100];
    float marks[100];

    int n = 0;

    while (true) {
        int option;

        cout << "\n===== Student Record System =====" << endl;
        cout << "1. Add Student Record" << endl;
        cout << "2. Display All Records" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> option;
        cin.ignore();

        switch (option) {

        case 1: {
            cout << "Enter Student Name: ";
            getline(cin, name[n]);

            cout << "Enter Roll Number: ";
            cin >> roll[n];

            cout << "Enter Marks: ";
            cin >> marks[n];
            cin.ignore();
            n++;
            cout << "Record Added Successfully!" << endl;
            break;
        }

        case 2:{
            if(n==0) {
                cout<< "No Records Found!" << endl;
            } else {
                cout<< "\nName\tRoll No\tMarks" << endl;
                for (int i = 0; i < n; i++) {
                    cout << name[i] << "\t"
                         << roll[i] << "\t"
                         << marks[i] << endl;
                }
            }
            break;
        }

        case 3:{
            int searchRoll;
            bool found = false;

            cout << "Enter Roll Number to Search: ";
            cin >> searchRoll;

            for (int i = 0; i < n; i++) {
                if (roll[i] == searchRoll) {
                    cout<< "\nStudent Found!" << endl;
                    cout<< "Name: " << name[i] << endl;
                    cout<< "Roll No: " << roll[i] << endl;
                    cout<< "Marks: " << marks[i] << endl;
                    found = true;
                    break;
                }
            }

            if(!found) {
                cout << "Student Record Not Found!" << endl;
            }

            cin.ignore();
            break;
        }

        case 4: {
            cout << "Exiting Program..." << endl;
            return 0;
        }

        default:
            cout << "Invalid Choice!" << endl;
        }
    }

    return 0;
}