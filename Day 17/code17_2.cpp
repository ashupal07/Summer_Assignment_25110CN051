//Write a program to Union of arrays
#include <iostream>
using namespace std;

int main() {

    int size1;
    cout << "Enter size of array 1 : ";
    cin >> size1;

    int arr1[size1];
    cout << "Enter elements in array 1: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    int size2;
    cout << "Enter size of array 2 : ";
    cin >> size2;

    int arr2[size2];
    cout << "Enter elements in array 2: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

// Merge both arrays into arr3
    int arr3[size1 + size2];

    for (int i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        arr3[size1 + i] = arr2[i];
    }

// Store union in arr4
    int arr4[size1 + size2];
    int k = 0;

    for (int i = 0; i < size1 + size2; i++) {

        int found = 0;

        for (int j = 0; j < k; j++) {
            if (arr3[i] == arr4[j]) {
                found++;
                break;
            }
        }

        if (found == 0) {
            arr4[k] = arr3[i];
            k++;
        }
    }

    cout << "Union of arrays: ";
    for (int i = 0; i < k; i++) {
        cout << arr4[i] << " ";
    }

    return 0;
}