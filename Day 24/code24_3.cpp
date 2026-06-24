
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter string : ";
    getline(cin, str);

    int longest= 0,words=0,index= 0;

    for (int i=0;i<= str.length();i++) {
        if (str[i] == ' ' || str[i]== '\0') {
            if (words>longest) {
                longest= words;
                index=i-words;
            }
            words=0;
        }
        else {
            words++;
        }
    }

    for (int i = index; i < index + longest; i++) {
        cout << str[i];
    }

    return 0;
}