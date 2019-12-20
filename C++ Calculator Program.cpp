#include <iostream>
#include <math.h>
#include <string>

using namespace std;

enum Arthmetic {ADD =1, SUB, MULT, DIV, EXIT};

void WelcomeScreen ();

void WelcomeArt ();

int Addition (int sum, int numVal);

int Subtraction (int sum);

int Multiplication (int sum);

int Division (int sum);

void DisplayResult (int sum);

main (){

    int sum;
    int numVal;

    WelcomeScreen();

    return 0;
}

int Addition (int sum, int numVal){

    int choice;
    int count =0;
    bool exitLoop = true;
    char q;
    sum=0;
//    numVal =0;

    cout << "Enter a positive or negative integer or 'q' to stop entering numbers: \n";
//    cin >> numVal;
    while (exitLoop) {
            if (numVal == q) {

                exitLoop = false;
//  ++++++Test Thing++++++
    cout << sum << endl;
//  ++++++++++++++++++++++

            } else {
                cin >> numVal;
                sum = sum + numVal;
//                count++;
            }

    }
}

void WelcomeScreen(){

    int sum;
    int numVal;
    int choice;

    do {

        cout << "Please choose from the options below. \n"
             << "For ADDITION press [1] \n"
             << "For SUBTRACTION press [2] \n"
             << "For MULTIPLICATION press [3] \n"
             << "For DIVISION press [4] \n"
             << "To EXIT the program [5] \n";
        cin >> choice;

        switch (choice) {

            case ADD:
                Addition(sum, numVal);
                break;

            case SUB:
                Subtraction(sum);
                break;

            case MULT:
                Multiplication(sum);
                break;

            case DIV:
                Division(sum);
                break;

            case EXIT:
                cout << "See Ya, GUY!! \n";
                break;

            default:
                cout << "You have chosen incorrectly, please try again. \n";
                break;
        }

    } while (choice != EXIT);
}

int Subtraction (int sum) {

//  ++++++Test Thing++++++
    cout << "SUB works! \n\n";
//  ++++++++++++++++++++++
}

int Multiplication (int sum){

//  ++++++Test Thing++++++
    cout << "Mult works! \n\n";
//  ++++++++++++++++++++++
}

int Division (int sum){

//  ++++++Test Thing++++++
    cout << "Div works! \n\n";
//  ++++++++++++++++++++++
}
