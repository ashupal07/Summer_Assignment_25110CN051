//Write a program to Write function to check prime
#include <iostream>
using namespace std;

void checkPrime(int n){
    int check=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            check++;
            break;
        }
    }
    if (check==0)
        cout << "Number is prime";
    else 
        cout << "Number is not prime";
}

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (num==1){
        cout << "1 is neither prime nor composite... Try again..." <<endl;
    }
    else{
        checkPrime(num);
    }
    return 0;
}