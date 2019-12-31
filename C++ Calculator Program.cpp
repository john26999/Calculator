// Programmer: John Wilson
// Program: C++ Calculator Program. This program will begin with simple arithmetic
//          functions (add, sub, multi, div) and then will modify future functions
//          to solve algebra, geometry , etc.
//Date: 10 Dec 2019

#include <iostream>     //library for cout
#include <math.h>       //library for math functions
#include <string>       //library for string functions
#include <limits>      //library for setting error checking

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
int Addition (int sum);

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

//This function simply checks the user inputs integers and nothing else.
//Pre:  none
//Post: Will continue to loop the error until user inputs the info correctly
string IntErrorChk ();

//This function will display the solution to the math problems
//Pre: none.
//Post: Will display the solution to the math problems.
void DisplayResult (int sum);

int main (){

    int sum;                //local variable
    int numVal;             //local variable

    //Function calls the welcome screen
    WelcomeScreen();

    return 0;
}

void WelcomeScreen() {

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
                Addition(sum);
                cout << endl;
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

int Addition (int sum){

    int numVal;         //Local Variable
    sum = 0;            //Local variable that is initialized
    int count;

    cout << "Enter a positive or negative integer and then press enter to continue "
         << "adding new integers or press '-0' for solution and to return to the main menu: \n";
    cin >> numVal;

    //Calls function for integer error checking
    IntErrorChk ();

     //do-while loop that continues to loop until the user wants the solution.
     do {

        cin >> numVal;
       sum = sum + numVal;

     } while (numVal != -0);

    // Function call to display the results of the integers
    DisplayResult (sum);
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

string IntErrorChk (){

 int numVal;

    while (1) {

        if (cin.fail()) {  //This function returns true when an input failure occurs.

            //cin.clear is used to clear the error state of the buffer so further processing of input can take place.
            cin.clear ();

            //cin.ignore is used to ignore the rest of the line after the first instance of error that has occurred.
            cin.ignore (numeric_limits <streamsize>::max(), '\n');
            cout << "You have entered incorrect info. Input integers only" <<endl;
            cin  >> numVal;

        } else if (!cin.fail()) {

            break;
        }
    }
}

void DisplayResult (int sum) {

    //  ++++++Test Thing++++++
        cout << sum << endl;
    //  ++++++++++++++++++++++

}
