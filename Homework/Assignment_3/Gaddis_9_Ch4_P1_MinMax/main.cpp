/* 
 * File:   minmax.cpp l. >> <<
 * Author: Nichole Medero
 * Created on October 4, 2018, 11:26 AM
 * Purpose:  Write a program that asks the user to enter two numbers. The program 
 * should use the conditional operator to determine which number is smaller.
 */

/*
 *PSEUDOCODE:
 */

#include <iostream>

using namespace std;

//User libraries here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {

    //Declare all Variables Here

    int first; //first number put in by user
    int second; //second number put in by user

    cout << "This program asks you to select two numbers. It will output which"
            "number is greater and which number is larger." << endl;
    cout << "Please enter the first integer of your choice: ";
    cin>>first; //user's first choice
    cout << "Please enter the second integer of your choice: ";
    cin>>second; //user's second choice
    cout << "You have selected " << first << " and " << second << "." << endl;

    if (first > second) {
        cout << first << " is greater than " << second << "." << endl;
    }
    if (first < second) {
        cout << second << " is greater than " << first << "." << endl;
    }
    if (first == second) {
        cout << "You have selected 2 equal integers." << endl;
    }

    //Exit
    return 0;
}

