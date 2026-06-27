//Write a program to Create quiz application
// Write a program to Create Quiz Application
#include <iostream>
using namespace std;

int main(){
    int level,answer,score = 0;
    cout << "************ QUIZ APPLICATION ************"<< endl;
    cout << "Select Difficulty Level:"<< endl;
    cout << "1. Easy"<< endl;
    cout << "2. Medium"<< endl;
    cout << "3. Hard"<< endl;
    cout << "Enter your choice: ";
    cin >> level;

    switch(level){
        case 1:
            cout << "\n     EASY LEVEL\n";

            cout << "Q1. Which header file is used for input and output in C++?" << endl;
            cout << "1. <stdio.h>" << endl;
            cout << "2. <iostream>" << endl;
            cout << "3. <conio.h>" << endl;
            cout << "4. <math.h>" << endl;
            cout << "Enter your answer: ";
            cin>>answer;
            if(answer==2)
                score++;

            cout << "Q2. Which loop executes at least once?" << endl;
            cout << "1. for" << endl;
            cout << "2. while" << endl;
            cout << "3. do-while" << endl;
            cout << "4. foreach" << endl;
            cout << "Enter your answer: ";
            cin>>answer;
            if(answer==3)
                score++;

            cout << "Q3. Which operator is used to find the remainder?" << endl;
            cout << "1. /" << endl;
            cout << "2. %" << endl;
            cout << "3. *" << endl;
            cout << "4. +" << endl;
            cout << "Enter your answer: ";
            cin>>answer;
            if(answer==2)
                score++;
            break;

        case 2:
            cout << "\n     MEDIUM LEVEL\n";

            cout << "Q1. Who developed C++?" << endl;
            cout << "1. Dennis Ritchie" << endl;
            cout << "2. James Gosling" << endl;
            cout << "3. Bjarne Stroustrup" << endl;
            cout << "4. Guido van Rossum" << endl;
            cout << "Enter your answer: ";
            cin>>answer;
            if(answer==3)
                score++;

            cout << "Q2. Which of the following is NOT a primitive data type in C++?" << endl;
            cout << "1. int" << endl;
            cout << "2. float" << endl;
            cout << "3. string" << endl;
            cout << "4. char" << endl;
            cout << "Enter your answer: ";
            cin>>answer;
            if(answer==3)
                score++;

            cout << "Q3. What is the output of?" << endl;
            cout << "int x = 5;" << endl;
            cout << "cout << x++;" << endl;
            cout << "1. 5" << endl;
            cout << "2. 6" << endl;
            cout << "3. Error" << endl;
            cout << "4. 4" << endl;
            cout << "Enter your answer: ";
            cin>>answer;
            if(answer==1)
                score++;
            break;

        case 3:
            cout << "\n     HARD LEVEL\n";

            cout << "Q1. Which concept allows the same function name with different parameters?" << endl;
            cout << "1. Inheritance" << endl;
            cout << "2. Function Overloading" << endl;
            cout << "3. Encapsulation" << endl;
            cout << "4. Abstraction" << endl;
            cout << "Enter your answer: ";
            cin>>answer;
            if(answer == 2)
                score++;

            cout << "Q2. Which keyword is used to allocate memory dynamically in C++?" << endl;
            cout << "1. malloc" << endl;
            cout << "2. alloc" << endl;
            cout << "3. new" << endl;
            cout << "4. create" << endl;
            cout << "Enter your answer: ";
            cin>>answer;
            if(answer == 3)
                score++;

            cout << "Q3. Which data structure follows the LIFO principle?" << endl;
            cout << "1. Queue" << endl;
            cout << "2. Stack" << endl;
            cout << "3. Linked List" << endl;
            cout << "4. Tree" << endl;
            cout << "Enter your answer: ";
            cin>>answer;
            if(answer==2)
                score++;
            break;

        default:
            cout<< "\nInvalid Choice!"<< endl;
            return 0;
    }
    cout << "\n================================="<<endl;
    cout << "Quiz Completed!" <<endl;
    cout << "Your Score: " << score<< "/3"<<endl;

    if(score==3)
        cout<<"Excellent! "<< endl;
    else if(score==2)
        cout<< "Good Job! "<< endl;
    else if(score==1)
        cout<<"Keep Practicing!"<< endl;
    else
        cout<<"Better Luck Next Time!"<< endl;

    return 0;
}