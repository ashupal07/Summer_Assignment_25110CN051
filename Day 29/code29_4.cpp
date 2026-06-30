//Write a program to Create inventory management system.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string product[100];
    int quantity[100];
    float price[100];

    int n = 0;

    while (true) {
        int option;

        cout << "\n===== Inventory Management System =====" << endl;
        cout << "1. Add Product" << endl;
        cout << "2. Display Products" << endl;
        cout << "3. Search Product" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> option;
        cin.ignore();

        switch (option) {

        case 1: {
            cout << "Enter Product Name: ";
            getline(cin, product[n]);

            cout << "Enter Quantity: ";
            cin >> quantity[n];

            cout << "Enter Price: ";
            cin >> price[n];
            cin.ignore();

            n++;

            cout << "Product Added Successfully!" << endl;
            break;
        }

        case 2: {
            if (n == 0) {
                cout << "No products available." << endl;
            } else {
                cout << "\nProduct\tQuantity\tPrice" << endl;
                for (int i = 0; i < n; i++) {
                    cout << product[i] << "\t"
                         << quantity[i] << "\t\t"
                         << price[i] << endl;
                }
            }
            break;
        }

        case 3: {
            string search;
            bool found = false;

            cout << "Enter Product Name to Search: ";
            getline(cin, search);

            for (int i = 0; i < n; i++) {
                if (product[i] == search) {
                    cout << "\nProduct Found!" << endl;
                    cout << "Name: " << product[i] << endl;
                    cout << "Quantity: " << quantity[i] << endl;
                    cout << "Price: " << price[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Product Not Found!" << endl;
            }

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