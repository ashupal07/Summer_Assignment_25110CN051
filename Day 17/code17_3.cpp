//Write a program to Intersection of arrays
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

    int arr3[size1];
    int k = 0;

    for (int i = 0; i < size1; i++) {

        int found = 0;

        // Check if arr1[i] exists in arr2
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                found++;
            }
        }
// Check if already stored in arr3
        int duplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr1[i] == arr3[j]) {
                duplicate++;
            }
        }

        if (found > 0 && duplicate == 0) {
            arr3[k] = arr1[i];
            k++;
        }
    }

    cout << "Intersection of arrays: ";
    for (int i = 0; i < k; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}