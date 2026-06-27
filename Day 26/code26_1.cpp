//Write a program to Create number guessing game.
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int gnum,rnum;
    
    srand(time(0));
    rnum=(rand()%10+1);

    cout <<"Guess a number between 1 to 10 : ";
    cin>>gnum;
    if(gnum>=1 && gnum<=10){
        
        if(gnum==rnum){
            cout<<"You guessed correctly...";
        }
        else{
            cout<<"You guessed wrong..."<<endl;
            cout<< "The number is "<<rnum;
        }

    }
    else{
        cout<<"Out of the range number...\nGuess number between 1 to 10";
    }
    return 0;
}