//Write a program to Create menu-driven string operations system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, str2;

    cout << "Enter a string: ";
    getline(cin, str);

    while (true) {
        int option;

        cout << "\n===== String Operations Menu =====" << endl;
        cout << "1. Display String" << endl;
        cout << "2. Find Length" << endl;
        cout << "3. Concatenate String" << endl;
        cout << "4. Reverse String" << endl;
        cout << "5. Compare Strings" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> option;
        cin.ignore();

        switch (option) {

        case 1: {
            cout << "String: " << str << endl;
            break;
        }

        case 2: {
            cout << "Length = " << str.length() << endl;
            break;
        }

        case 3: {
            cout << "Enter another string: ";
            getline(cin, str2);
            cout << "Concatenated String: " << str + str2 << endl;
            break;
        }

        case 4: {
            cout << "Reversed String: ";
            for (int i = str.length() - 1; i >= 0; i--) {
                cout << str[i];
            }
            cout << endl;
            break;
        }

        case 5: {
            cout << "Enter another string: ";
            getline(cin, str2);

            if (str == str2)
                cout << "Both strings are equal." << endl;
            else
                cout << "Both strings are not equal." << endl;

            break;
        }

        case 6: {
            cout << "Exiting Program..." << endl;
            return 0;
        }

        default:
            cout << "Invalid Choice!" << endl;
        }
    }

    return 0;
}