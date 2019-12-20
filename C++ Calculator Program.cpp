// Programmer: John Wilson
// Program: C++ Calculator Program. This program will begin with simple arithmetic
//          functions (add, sub, multi, div) and then will modify future functions
//          to solve algebra, geometry , etc.
//Date: 10 Dec 2019

#include <iostream>     //library for cout
#include <math.h>       //library for math functions
#include <string>       //library for string functions

using namespace std;

//this enum function is for the witch statement
enum Arthmetic {ADD =1, SUB, MULT, DIV, EXIT};

//This function includes instructions to how to use the program
//Pre: Will have switch function
//Post: None
void WelcomeScreen ();

//This function will have some fun ocular art in the shape of a calculator.
//Pre: None.
//Post: Will display a calculator.
void WelcomeArt ();

//This function will add an unlimited number of intergers together
//Pre: Will declare int variables sum and numVal.
//Post: Will add numbers and provide the solution.
string Addition (int sum, int numVal);

//This function will subtract an unlimited number of integers together
//Pre: Will declare int variables sum and numVal.
//Post: Will subtract numbers and provide the solution.
int Subtraction (int sum);

//This function will multiply an unlimited number of integers together
//Pre: Will declare int variables sum and numVal.
//Post: Will multiply numbers and provide the solution.
int Multiplication (int sum);

//This function will divide an unlimited number of integers together
//Pre: Will declare int variables sum and numVal.
//Post: Will divide numbers and provide the solution.
int Division (int sum);

//This function will display the solution to the math problems
//Pre: none.
//Post: Will display the solution to the math problems.
void DisplayResult (int sum);

main (){

    int sum;                //local variable
    int numVal;             //local variable

    //Function calls the welcome screen
    WelcomeScreen();

    return 0;
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

string Addition (int sum, int numVal){

    int count = 0;       //Local variable that is initialized
    char q;             //Local Variable
    sum = 0;            //Local variable that is initialized

    cout << "Enter a positive or negative integer and then press enter to continue "
         << "adding new integers or press 'q' to stop entering numbers and for solution: \n";

    while (! (numVal == q)) {
        cin >> numVal;
        sum = sum + numVal;
//        count++;
    }

    //  ++++++Test Thing++++++
        cout << sum << endl;
    //  ++++++++++++++++++++++
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
